//
//  OSClientOperation.h
//  CltDaLibForOS
//
//  Created by cqrm on 15/4/24.
//  Copyright (c) 2015年 cqrm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OSClientData.h"
#import "OSDefine.h"

@class OSIConn;
@class OSIAlarm;
@class OSIHandler;
@class OSIGPS;
@class OSIDevice;

@protocol   OSIConnDelegate;        //must accomplish
@protocol   OSIAlarmDelegate;       //must accomplish
@protocol   OSIGPSDelegate;        //must accomplish
@protocol   OSIDeviceDelegate;      //must accomplish

@interface OSClientOperation : NSObject

@end

@protocol OSIConnDelegate <NSObject>

-(void) connctedDelegate;
-(void) disConnectDelegate;
-(void) loginOKDelegate;
-(void) loginFailedDelegate : (NSString *) szFailedReason;
-(void) forceOffLineDelegate;

@end

@protocol OSIAlarmDelegate <NSObject>

-(void) alarmMsgDelegate : (OSIAlarmInfo *) alarmInfo;
-(void) dealAlarmMsgDelegate : (OSIReciveAlarmDealInfo *) alarmDealInfo;

@end


@protocol OSIGPSDelegate <NSObject>

-(void) gpsMagDelegate:(OSIAlarmInfo *) alarmInfo;
-(void) busTaskMsgDelegate:(NSMutableDictionary*) dictInfo;

@end


@protocol OSIDeviceDelegate <NSObject>

-(void) deviceStatusDelegateDevID:(NSMutableArray *)arryDevId   Status:(NSMutableArray *)arryDevStatus; //arryDevId:nsstring    arryDevStatus:NSNumber

@end

@interface OSIConn : NSObject

@property (nonatomic, assign) NSInteger timeOutSec;
@property (nonatomic, weak) id<OSIConnDelegate> delegate;

-(NSInteger)  initConn;
-(NSInteger)  unInitConn;
-(NSInteger)  syncLoginServerIP:(NSString *)svrIp  Port:(NSInteger) port   Type:(NSInteger) conType Usr:(NSString *)usr    PassWord:(NSString *)pass   errorLogPath:(NSString *)errorLogPath TimeOutSec:(NSInteger)timeOut;   //connType 0:client CA DB; 1:banlance DB
- (NSInteger)setPreferIPv6:(BOOL)preferIPv6;
- (NSInteger)setOnTLS:(BOOL)on;
-(NSInteger)  logoutServer;
-(NSInteger)   syncQueryFromServerIP:(NSString *)svrIp  Port:(NSInteger) port   OutBlanceInfo:(OSIBlanceInfo **)blanceInfo    TimeOutSec:(NSInteger)timeOut;
-(NSInteger)	syncStartReciveAlarmAndGpsServerPlat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum  Language:(NSInteger)langval TimeOutSec:(NSInteger)timeOut;
-(NSInteger)	syncStopReciveAlarmAndGpsServerPlat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum    TimeOutSec:(NSInteger)timeOut;

-(NSInteger)	syncStartPushAlarmServerPlat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum    Language:(NSInteger)langval TimeOutSec:(NSInteger)timeOut;      // MVSP: langval 0 is Simplified Chinese ； 1 is english
-(NSInteger)	syncStartPushAlarmServerPlat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum    Language:(NSInteger)langval Sound:(NSInteger)sound TimeOutSec:(NSInteger)timeOut;
-(NSInteger)	syncStopPushAlarmServerPlat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum    TimeOutSec:(NSInteger)timeOut;


//================= add for MVSP by sd at 2015/10/9 ========================//


-(NSInteger)	syncSubPushAlarmType:(NSMutableArray *) alarmType TokenId:(NSString *) tokenId  TimeOutSec:(NSInteger)timeOut; //alarmType: NSarry - NSNumber //设置
-(NSInteger)	syncPushType:(NSInteger)type AlarmVehicleID:(NSMutableArray *) vehicleID TokenId:(NSString *) tokenId TimeOutSec:(NSInteger)timeOut; //vehicleID:NSArry-NSString;TYPE : 1 is reset, 2 is add , 3 is delete
-(NSInteger)	syncQueryPushAlarmTypeFromTokenId:(NSString *) tokenId outType:(NSMutableArray **) alarmType TimeOutSec:(NSInteger)timeOut; //alarmType: NSarry - NSNumber
-(NSInteger)	syncQueryPushVehicleFromTokenId:(NSString *) tokenId outVehicleID:(NSMutableArray **) vehicleID TimeOutSec:(NSInteger)timeOut; //alarmType: NSarry - NSNumber

-(NSInteger)  synClearedPushCountForTokenId:(NSString*)tokenId addPushCount:(NSInteger)pushCount addTimeOutSec:(NSInteger)timeOut;

-(NSInteger) syncWriteOperationLogs:(NSMutableArray<OSILogInfo*>*)loginfo timeOutSec:(NSInteger)timeOut;

-(void)syncHandleAlarmWithUUId:(NSString*)uuid Vehicle:(NSString*)vehicleId User:(NSInteger)userId Time:(NSDate*)date Type:(NSInteger)type Desc:(NSString*)desc UapIP:(NSString *)ip UapPort:(NSInteger)port TimeOutSec:(NSInteger)timeOut;
-(NSData *) syncSearchGpsWithVehicle:(NSString *)vehicleId StartTime:(NSDate *)startTime EndTime:(NSDate *)endTime UapIP:(NSString *)ip UapPort:(NSInteger)port TimeOutSec:(NSInteger)timeOut;
-(NSArray *)syncSearchGpsDayWithVehicle:(NSString *)vehicleId Year:(NSInteger)year Month:(NSInteger)month UapIP:(NSString *)ip UapPort:(NSInteger)port TimeOutSec:(NSInteger)timeOut;
-(NSArray *)syncSearchDriverSwipeWithVehicle:(NSString *)vehicleId StartTime:(NSDate *)startTime EndTime:(NSDate *)endTime UapIP:(NSString *)ip UapPort:(NSInteger)port TimeOutSec:(NSInteger)timeOut;

//================= end add ==============//

//-(NSInteger)  asyncLoginServerIP:(NSString *)svrIp  Port:(NSInteger) port   Type:(NSInteger) conType Usr:(NSString *)usr    PassWord:(NSString *)pass;   //connType 0:client CA DB; 1:banlance DB


@end


@interface OSIAlarm : NSObject

@property (nonatomic, assign) NSInteger timeOutSec;
@property (nonatomic, weak) id<OSIAlarmDelegate> delegate;

-(void) callAlarmMsgDelegate : (OSIAlarmInfo *) alarmInfo;
-(void) callDealAlarmMsgDelegate : (OSIReciveAlarmDealInfo *) reciveAlarmDealInfo;

//===============================   Synchronous    medthod=============================//
//-(NSInteger)	syncRegisterAlarmOutResult:(NSString **)response  Plat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum  Language:(NSInteger)langval TimeOutSec:(NSInteger)timeOut;
//-(NSInteger)	syncUnRegisterAlarmOutResult:(NSString **)response  Plat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum    TimeOutSec:(NSInteger)timeOut;
-(NSInteger)    syncDealAlarm:(OSIAlarmDealInfo *)alarmDealInfo TimeOutSec:(NSInteger) timeOut;

-(NSInteger)	syncQueryAlarmCond : (OSIQueryAlarmCond *) queryCond    OutResult :(NSMutableArray **) queryResult   TimeOutSec:(NSInteger)timeOut;   //queryResult:OSIAlarmInfo  

//=================   add  by  MVSP ==================//
-(NSInteger)	syncQueryHistoryAlarmCond : (OSIQueryAlarmCond *) queryCond    OutResult :(NSMutableArray **) queryResult  andAllAlarmCount:(NSInteger*)count TimeOutSec:(NSInteger)timeOut;   //queryResult:OSIAlarmInfo
//=================  end  add        ===============//

//-(NSInteger)    syncGetQueryAlarmHandle:(NSUInteger) queryHandle	OutResult : (NSMutableArray **) queryResult TimeOutSec:(NSInteger)timeOut;      //queryResult:OSIAlarmInfo
//===============================  end Synchronous    medthod=============================//


//===============================   Asynchronous    medthod===========================//
//-(NSInteger)	asyncRegisterAlarmOutHandle:(NSUInteger &) handle  Plat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum  Language:(NSInteger)langval;
//-(NSInteger)	asyncUnRegisterAlarmOutHandle:(NSUInteger &) handle  Plat:(NSInteger) platType TokenId:(NSString *) tokenId    PhoneNum:(NSString * )phoneNum;
//-(NSInteger)	asyncQueryAlarmCond : (OSIQueryAlarmCond *) queryCond    OutHandle :(NSUInteger &) queryHandle;
//-(NSInteger)	asyncGetQueryAlarmHandle:(NSUInteger) queryHandle	OutResult : (NSMutableArray **) queryResult;
//===============================   end Asynchronous    medthod===========================//


//custom alarm   question
//-(NSInteger)	addAlarmSubGroupID : (NSMutableArray *) groupID 	Type : (NSMutableArray*) alarmType  	outHandle : (NSInteger &) handle;   //groupID:NSString ; alarmType:NSNumber
//-(NSInteger)	delAlarmSubGroupID : (NSMutableArray *) groupID 	Type : (NSMutableArray*) alarmType  	outHandle : (NSInteger &) handle;  //groupID:NSString ; alarmType:NSNumber
//-(NSInteger)	addAlarmSubDevID : (NSMutableArray *) devID 	Type : (NSMutableArray*) alarmType  	OutHandle : (NSInteger &) handle;  //groupID:NSString ; alarmType:NSNumber
//-(NSInteger)	delAlarmSubDevID : (NSMutableArray *) devID 	Type : (NSMutableArray*) alarmType  	outHandle : (NSInteger &) handle;  //groupID:NSString ; alarmType:NSNumber

@end

@interface OSIGPS : NSObject

@property (nonatomic, assign) NSInteger timeOutSec;
@property (nonatomic, weak) id<OSIGPSDelegate> delegate;
-(void) callGpsMsgDelegate : (OSIAlarmInfo *) alarmInfo;
-(void) callBusTaskMsgDelegate : (NSMutableDictionary*)taskInfo;

-(NSInteger)    syncDynGPSSubGroupID:(NSMutableArray *) arryGroupID   Area:(NSMutableArray *) arryArea    TimeOutSec:(NSInteger)timeOut;         //sub will delete ago sub； arryarea：NSMutableArray-NSArry-NSNumber ; arryGroupID is  not nil; arryArea can be nil   arryGroupID:NSnumber

/*--------
 sub will delete ago sub； 
 arryarea：NSMutableArray-NSArry-NSNumber;
 arryDevID is  not nil; arryArea can be nil   ； 
 arryDevID：NSString；MVSP is VehicleID; CEIBAII is deviceID
----*/
-(NSInteger)    syncDynGPSSubDevID: (NSMutableArray *) arryDevID   Area:(NSMutableArray *) arryArea    TimeOutSec:(NSInteger)timeOut;

-(NSInteger)    syncQueryGroupID:(NSInteger) groupID    LastGPSInfoOut:(NSMutableArray **)gpsInfo   TimeOutSec:(NSInteger)timeOut;   //gpsInfo:OSIAlarmInfo

-(NSInteger)    syncQueryDevID:(NSMutableArray *) arryDevID    LastGPSInfoOut:(NSMutableArray **)gpsInfo   TimeOutSec:(NSInteger)timeOut;       //arryDevID:Nsstring
-(NSInteger)    syncQueryAllLastGPSInfoOut:(NSMutableArray **)gpsInfo   TimeOutSec:(NSInteger)timeOut;

-(NSInteger)    syncUnDynGPSTimeOutSec:(NSInteger)timeOut;
-(NSInteger)    syncGetGreenDriveCANData:(NSMutableDictionary **)candata vehicleArray:(NSMutableArray *) arrayVehicles startTime:(NSString*)starttime endTime:(NSString*)endtime;
// add for MVSP   2015-9-22
//-(NSInteger)    syncDynGPSVehicleID:(NSMutableArray *) arryVehicleID  TimeOutSec:(NSInteger)timeOut;       //arryDevID:arryVehicle


@end


@interface OSIDevice : NSObject

@property (nonatomic, weak) id<OSIDeviceDelegate> delegate;
@property (nonatomic, assign) NSInteger timeOutSec;
-(void) callDeviceDelegateDevID:(NSMutableArray *)arryDevId   Status:(NSMutableArray *)arryDevStatus; //arryDevId:nsstring    arryDevStatus:NSNumber   arryDevId 在mvsp中为车牌ID ； CEIBAII中为设备ID
-(NSInteger) startReciveDevStatus;
-(NSInteger) startReciveDevStatus:(NSArray *)devArray;
-(NSInteger) startReceiveDevStatusWithDevID:(NSMutableArray *)arryDevId;
-(NSInteger) stopReciveDevStatus;
-(NSInteger) syncQueryOnlineDevOut:(NSMutableArray **)arryDevId InDevArry:(NSMutableArray *)arryQueryDevId  TimeOutSec:(NSInteger)timeOut;  //arryQueryDevId  : nsstring ,if arryQueryDevId is nil will query allDev


-(NSInteger) syncQueryFromSvrIp:(NSString*)svrIp    andPort:(NSInteger)port OutDevInfo:(NSMutableArray **)arryDevInfo AndOutGroupInfo:(NSMutableArray **)arryGroupInfo    TimeOutSec:(NSInteger)timeOut;  //arryGroupInfo:OSIGroupInfo ; arryDevInfo:OSIDeviceInfo
-(NSInteger) syncQueryOutDevInfo:(NSMutableArray **)arryDevInfo AndOutGroupInfo:(NSMutableArray **)arryGroupInfo    TimeOutSec:(NSInteger)timeOut;  //arryGroupInfo:OSIGroupInfo ; arryDevInfo:OSIDeviceInfo
-(NSInteger) syncQueryNetSnapshot:(NSString*)deviceWanIP addSelectchannel:(NSInteger)selectChannel outSnapshotData:(NSData*)snapshotData  TimeOutSec:(NSInteger)timeOut;
-(OSServerInfo*) syncGetVAPIPandPort:(NSString*)deviceID;
-(NSInteger) syncQueryBusLineAndStationInfo:(NSMutableDictionary**)dict TimeOutSec:(NSInteger)timeOut;
-(NSInteger) syncQueryBusLineAndStationsInfos:(NSMutableArray**)array TimeOutSec:(NSInteger)timeOut;
-(NSInteger) syncQueryLastBusStationInfo:(NSMutableArray*)vehicleIDArray outStationInfo:(NSMutableDictionary**)dict TimeOutSec:(NSInteger)timeOut;
-(NSInteger) syncQueryEStationInfoWithStation:(NSNumber*)stationNum outVehicleInfo:(NSMutableDictionary **)dict TimeOutSec:(NSInteger)timeOut;
-(NSInteger) syncQueryEStationInfoWithLineAndStation:(NSNumber*)lineNum stationName:(NSNumber*)stationNum outVehicleInfo:(NSMutableDictionary **)dict TimeOutSec:(NSInteger)timeOut;
@end

@interface OSIHandler : NSObject

@property NSInteger timeOutSec;

-(NSInteger)syncGetHand:(NSUInteger)hHandle OutResult:(NSString **)response TimeOutSec:(NSInteger)timeOut;
-(NSInteger)syncGetHand:(NSUInteger)hHandle OutResult:(NSString **)response;

-(NSInteger)asyncGetHand:(NSUInteger)hHandle OutResult:(NSString **)response;
-(NSInteger)closeHandle : (NSUInteger) hHandle;

@end
