#ifndef __CLTDAINC_H
#define __CLTDAINC_H

#include "CDKeyDef.h"

#ifdef _WIN32
#define STDCALL __stdcall
#else
#define STDCALL
#endif



//error code define

//#define CLTERR(n)	(0x0001<<16 | (n) & 0xffff)
#define CLTERR(n)	(0 | (n) & 0xffff)

#define		ERR_CLTDA_SUCCESS		0
#define		ERR_CLTDA_FAILED		CLTERR(3)
#define		ERR_CLTDA_PASSWORDERR	CLTERR(2)
#define		ERR_CLTDA_PARAMETER		CLTERR(26)
#define		ERR_CLTDA_MEMNOTENOUGH	CLTERR(1)
#define		ERR_CLTDA_NOTFOUND		CLTERR(4)
#define		ERR_CLTDA_NOPERIM		CLTERR(5)
#define		ERR_CLTDA_MAXUSERONLINE CLTERR(6)
#define		ERR_CLTDA_TASKEXIST		CLTERR(7)
#define		ERR_CLTDA_RESTASKFULL	CLTERR(8)
#define		ERR_CLTDA_CHANNELERR	CLTERR(9)
#define		ERR_CLTDA_NOENCODING	CLTERR(10)
#define     ERR_CLTDA_OTHERCLIENTLOGIN    CLTERR(13)


#define		ERR_CLTDA_PROCESS		CLTERR(200)
#define		ERR_CLTDA_INVALIDHANDLE	CLTERR(201)
#define		ERR_CLTDA_BUFFNOTENOUGH	CLTERR(202)
#define		ERR_CLTDA_NOTINIT		CLTERR(203)
#define		ERR_CLTDA_NOCONNECT		CLTERR(204)
#define		ERR_CLTDA_CONNING		CLTERR(205)
#define		ERR_CLTDA_TIMEOUT		CLTERR(206)
#define		ERR_CLTDA_PARSEJSON		CLTERR(207)

#define		ERR_CLTDA_WEBREQFAILED	CLTERR(208)		//web request failed
#define		ERR_CLTDA_WEBERRRESULT	CLTERR(209)		//web server return invalid result

//callback msg
#define		CLTDA_MSG_CONN_OFFLINE	1
#define		CLTDA_MSG_CONN_ONLINE	2
#define		CLTDA_MSG_LOGIN_FAILED	3
#define		CLTDA_MSG_LOGIN_OK		4
#define		CLTDA_MSG_ALM_MSG		5
#define		CLTDA_MSG_ALMDEAL_MSG	6
#define		CLTDA_MSG_GPS_MSG		7
#define		CLTDA_MSG_OPERATION_RET	10 //every operation result call back message.
#define		CLTDA_MSG_DEV_OL_STATUS	11	// device online status change.
#define		CLTDA_MSG_CHANGENOTIFY	12	// some device configure change message
#define		CLTDA_MSG_CB_THREAD_INIT	100
#define		CLTDA_MSG_CB_THREAD_UNINIT	101

#define		JSON_CODING_GB2312	0
#define		JSON_CODING_UTF8	1



//callback define
#ifdef __cplusplus

extern "C"
{
#endif
    typedef void (STDCALL *fnCLTDACB) (void* pUser, int nCMD, char* pChr, int nLen);

unsigned long STDCALL CLTDA_JsonCommand( const char* szCommand, unsigned long* pulRet, unsigned char* szINOUT, unsigned long ulINOutLen, unsigned long* pCode);
#ifdef __cplusplus
}
#endif
#endif
