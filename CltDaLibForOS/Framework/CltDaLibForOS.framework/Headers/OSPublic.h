//
//  OSPublic.h
//  CltDaLibForOS
//
//  Created by cqrm on 15/3/11.
//  Copyright (c) 2015年 cqrm. All rights reserved.
//

#ifndef _OSPublic_h
#define _OSPublic_h

//#define SERVER_PLAT_TYEP_IS  [OSPublicManager shareOSPublicManager].conetServerPlat

//#import <Foundation/Foundation.h>
//#import "OSAlarm.h"
//#import "OSDAConn.h"
//#import "OSHandler.h"
//#import "OSGPS.h"
//#import "MVSPConn.h"
//#import "MVSPAlarm.h"
//#import "MVSPDevice.h"
//#import "MVSPGPS.h"

#import "OSClientOperation.h"

@class OSClientData;
@class MVSPWebService;

@interface OSPublicManager: NSObject


@property(nonatomic,strong)OSIAlarm* osAlarm;
@property(nonatomic,strong)OSIConn* osConn;
@property(nonatomic,strong)OSIHandler* osHandler;
@property(nonatomic,strong)OSIGPS* osGPS;
@property(nonatomic,strong)OSIDevice *osDevice;

@property(nonatomic,strong)OSClientData *osClientData;
@property(nonatomic,strong)MVSPWebService *mvspWebservice;
@property(nonatomic,strong)MVSPWebService *mvspTaskWebService;//业务服务,uap webservice

+(OSPublicManager*) shareOSPublicManager;
+(OSPublicManager*) shareMVSPPublicManager;
+(OSPublicManager*) shareMVSP2PublicManager;

+(NSInteger) analyAlarmInfofromChar:(char *)pChr andChrlen:(NSInteger) nLen andChrType: (NSInteger)chrType;
@end

void  CLTDACB (void* pUserData, int nCMD, char* pChr, int nLen);

long MVSPback(int msgType,void* ulUserData, char* pBuf, int nLen, int serverID, long param);


#endif
