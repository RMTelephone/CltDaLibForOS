//
//  MytestApi.h
//  mvspsdk
//
//  Created by xufei on 8/26/15.
//  Copyright (c) 2015 xufei. All rights reserved.
//

#ifndef __mvspsdk__MytestApi__
#define __mvspsdk__MytestApi__


#include "mvspdefine.h"

#ifdef __cplusplus
extern "C"
{
#endif
    
    typedef long (* MVSPCallback)(int msgType,void* ulUserData, char* pBuf, int nLen, int serverID, long param);

    
    void mytest();
    
    int MVSPInit(int mvspVersion);
    int MVSPUninit();
    int MVSPSetRegisterCallBack(MVSPCallback callback,void* userData);
    int MVSPSetVehcileData(struct vehicleDataInfo* vehicleInfo,int vehicleCount);
    int MVSPLogin(const char* serverIP,int port,const char* regKey);
    int MVSPLogout();
    int MVSPRequestOnlieStatus(char* vehicleID[], int vehicleCount);
    int MVSPRequestGPS(char* vehicleID[], int vehicleCount);
    int MVSPCancelGPS();
    int MVSPQueryAlar(char* vehicleID[], int vehicleCount, struct queryAlarmInfo queryAlarm);
    int MVSPHandleAlarm(char* vehicleID, char* alarmID, struct handleAlarmInfo handleinfo);
    //nettype: 0-public network   1-local network
    int MVSPGetVideoIPAndPort(char* vehicleID,int netType,struct ipAndPortInfo* ipportInfo);
    int MVSPNetSnapshot(char* vehicleID,int channel,char* szSource);

    int MVSPOpenVideo();
    int MVSPCloseVideo();
    int MVSPCapture();
    
    
    
#ifdef __cplusplus
}
#endif




#endif /* defined(__mvspsdk__MytestApi__) */
