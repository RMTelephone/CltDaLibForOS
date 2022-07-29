#ifndef MVSP_AES_ENCODE_H
#define MVSP_AES_ENCODE_H

#include "mvsp_macros.h"

#define AES_BLOCK_PER_BYTES  4
#define AES_STATE_LEN    16
#define AES_ROUND_CONST     11   //const number with round, for key expansion

enum AES_KEY_STATUS
{
    AES_128BIT = 0,
    AES_192BIT,
    AES_256BIT,
    AES_KEY_STATUS_CNT
};
class CMyAESEncode
{
public:
    CMyAESEncode(AES_KEY_STATUS keyState, const char *pKeyValue);
    ~CMyAESEncode();

    uint8* Encode(const uint8* pInput, const size_t inputLen, uint8* pOutput);
    uint8* Decode(const uint8* pInput, const size_t inputLen, uint8* pOutput);
private:
    void EncodeFlow(uint8 *pState);
    void DecodeFlow(uint8 *pState);

    void AddRoundKey(uint8 *pState, int round);

    void MixColumns(uint8 *pState);
    void InMixColumns(uint8 *pState);

    void SubBytes(uint8 *pState);
    void InSubBytes(uint8 *pState);

    void ShiftRows(uint8 *pState);
    void InShiftRows(uint8 *pState);

    void KeyExpansion();
    void SubWord(uint8 *pRow);
    void RotWord(uint8 *pRow);

    #define xtime(x)   (((x) << 1) ^ ((((x) >> 7) & 1) * 0x1b))
    static int GFMult01(uint8 val){return val;}
    static int GFMult02(uint8 val){return xtime(val);}
    static int GFMult03(uint8 val){return xtime(val) ^ val;}

    static int GFMult09(uint8 val){return GFMult02(GFMult02(GFMult02(val))) ^ GFMult01(val);}
    static int GFMult0B(uint8 val){return GFMult09(val) ^ GFMult02(val);}
    static int GFMult0D(uint8 val){return GFMult09(val) ^ GFMult02(GFMult02(val));}
    static int GFMult0E(uint8 val){return GFMult02(GFMult02(GFMult02(val))) ^ GFMult02(GFMult02(val)) ^ GFMult02(val);}
private:

    int m_NRound;    /* round count: (10, 12, 14) */
    int m_NKeyBlockLen;    /* key length, unit: block,  (4, 6, 8) */
    AES_KEY_STATUS m_KeyState;
    uint8 *m_pKeyExpansion;
    uint8 m_KeyValue[32]; //fix key length 32 bytes

    static int m_RoundNum[int(AES_KEY_STATUS_CNT)];
    static int m_BlockCount[int(AES_KEY_STATUS_CNT)];

    static uint8 m_SBox[16][16];    //metrix  16 X 16
    static uint8 m_iSBox[16][16];   //metrix  16 X 16

    static uint8 m_Rcon[AES_ROUND_CONST][AES_BLOCK_PER_BYTES];
};

#endif
