//
//  CMytest.h
//  mvspsdk
//
//  Created by xufei on 8/26/15.
//  Copyright (c) 2015 xufei. All rights reserved.
//

#ifndef __mvspsdk__CMytest__
#define __mvspsdk__CMytest__

#include <stdio.h>
#include "CPubNetManager.h"
#include "pubmvsp.h"
#include "MVSPSocket.h"
#include "mvspSum.h"
#include "mvspapi.h"
#include "mvspdefine.h"

class CMVSPNetManager:public CPubNetManager {
    
public:
    CMVSPNetManager();
    ~CMVSPNetManager();
    
    int SetRegisterCallback(MVSPCallback callback,void* userData);
    int SetVehicleData(struct vehicleDataInfo* pVehicleInfo,int vehCount);
    int LoginServer(const char* serverIP,int port,const char* regKey);
    int Logout();
    int RequestOnlieStatus(char* vehicleID[], int vehicleCount);
    int RequestGPS(char* vehicleID[], int vehicleCount);
    int QueryAlarm(char* vehicleID[], int vehicleCount,queryAlarmInfo query);
    int HandleAlarm(char *vehicleID, char* alarmID, handleAlarmInfo handleinfo);
    int GetVideoIPAndPort(char* vehicleID, int netType, struct ipAndPortInfo* ipportInfo);
    int NetSnapshot(char* vehicleID,int channel,char* szSource);

    
    
    
    //self public function for thread
    void MyTimerThread();
    void MyProcessData(char* pBuf, int nLen, unsigned int nIP, int nPort, long lEvent);
    void MyAlarmProcessData(char* pBuf, int nLen, unsigned int nIP, int nPort, long lEvent);
    void test();
    void RequestEventIPInfo(CMVSPSocket* pSocket);
    void RequestVideoIPINfo(CMVSPSocket* pSocket);
    
protected:
    //
    void*      m_lUserData;
    MVSPCallback m_callBack;
//    CMySocket m_Connect;
    int       m_nPort;
    CMvspSum  m_mvspSum;
    int       m_nTransNo;
    int       m_nServerID;
    BOOL      m_bExit;
    BOOL      m_bConnected[5];
    std::map<int,SERVER_INFO*> m_mapServer;
    std::map<std::string,vehicleDataInfo> m_mapVehicleMap;
    std::vector<SERVER_INDEXINFO> m_vectorServerIndex;
    BOOL      m_bNetSnapshot;
    char      m_szPicPath[128];
    
private:
    void ProcessGPS(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessAlarm(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessOnline(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessLogin(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessEncodeString(int indexMap,int msgType,char* pBuffer,int nLen);
    void Process808(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessAlarmMulti(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessTrans(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessImageQuery(int indexMap,int msgType,char* pBuffer,int nLen);
    void ProcessImageUploadProcess(int indexMap,int msgType,char* pBuffer,int nLen);
    
    void SetupGpsJson( void *gpsData, Json::Value &jValue );
    void SetupAlarmJson( void *alarmData, Json::Value &jValue );
    CMVSPSocket* CreateEventSocket(SERVER_INFO* serverInfo);
    
    int GetIndexFromServerVector(unsigned int dwIP, int port);
    
    unsigned long m_ulTicketTime[5];
    char      m_szIP[32];
    std::string      m_strSessionID;
    std::vector<std::string> m_requestIDVector;

};


#endif /* defined(__mvspsdk__CMytest__) */
