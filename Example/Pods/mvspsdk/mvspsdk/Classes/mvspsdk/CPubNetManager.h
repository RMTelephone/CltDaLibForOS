//
//  CMytest.h
//  mvspsdk
//
//  Created by xufei on 8/26/15.
//  Copyright (c) 2015 xufei. All rights reserved.
//

#ifndef __mvspsdk__pubnetmanager__
#define __mvspsdk__pubnetmanager__

#include <stdio.h>
#include "pubmvsp.h"
#include "mvspapi.h"
#include "mvspdefine.h"

class CPubNetManager {
    
public:
    CPubNetManager(){};
    virtual ~CPubNetManager(){};
    
    virtual int SetRegisterCallback(MVSPCallback callback,void* userData)=0;
    virtual int SetVehicleData(struct vehicleDataInfo* pVehicleInfo,int vehCount)=0;
    virtual int LoginServer(const char* serverIP,int port,const char* regKey)=0;
    virtual int Logout()=0;
    virtual int RequestOnlieStatus(char* vehicleID[], int vehicleCount)=0;
    virtual int RequestGPS(char* vehicleID[], int vehicleCount)=0;
    virtual int QueryAlarm(char* vehicleID[], int vehicleCount,queryAlarmInfo query)=0;
    virtual int HandleAlarm(char *vehicleID, char* alarmID, handleAlarmInfo handleinfo)=0;
    virtual int GetVideoIPAndPort(char* vehicleID, int netType, struct ipAndPortInfo* ipportInfo)=0;
    virtual int NetSnapshot(char* vehicleID,int channel,char* szSource)=0;
};


#endif /* defined(__mvspsdk__CMytest__) */
