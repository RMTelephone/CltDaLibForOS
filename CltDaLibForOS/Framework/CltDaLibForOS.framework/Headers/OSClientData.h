//
//  OSClientData.h
//  CltDaLibForOS
//
//  Created by cqrm on 15/4/24.
//  Copyright (c) 2015年 cqrm. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OSClientData;
@class OSServerInfo;
@class OSIAlarmInfo;
@class OSIGPSInfo;
//@class OSIAlarmDealInfo;
@class OSIReciveAlarmDealInfo;
@class OSIQueryAlarmCond;
@class OSIGroupInfo;
@class OSIDeviceInfo;
@class OSIBlanceInfo;
@class OSIBusstationInfo;
@class OSIBusLineInfo;

@interface OSClientData : NSObject

@property (nonatomic, assign) NSUInteger     platType;
@property (nonatomic, strong) OSServerInfo*  loginServer;
@property (nonatomic, strong) NSString *     regKey;
@property (nonatomic, assign) NSInteger      usrID;
@property (nonatomic, strong) NSMutableArray * uapServer;        // type：OSServerInfo
@property (nonatomic, strong) NSMutableArray * cmdArray;        //  用户权限列表
@property (nonatomic, assign) NSInteger validTime;//过期时间 0过期
@property (nonatomic, assign) BOOL isUserDisuse; //用户停用
@property (nonatomic,assign) NSInteger safetyPort;//主动安全端口
@property (nonatomic,assign) NSInteger alarmSvrPort; //报警处理端口
/// 视频播放时间
@property (nonatomic, assign) int videoTime;
@end


@interface OSServerInfo : NSObject

@property (nonatomic, strong) NSString      *ip;
@property (nonatomic, assign) NSInteger     port;
@property (nonatomic, assign) NSInteger     serverID;

@end



@interface OSIAlarmInfo : NSObject

@property (nonatomic, strong) NSString  *   devID;              //设备ID
@property (nonatomic, strong) NSString  *   alarmID;            //报警ID
@property (nonatomic, assign)  NSInteger alarmType;             //报警类型
@property (nonatomic, assign) NSInteger  cmdType;               //报警命令; 1解除报警 2.开始报警 3.预警;针对MVSP平台，1 结束报警， 2 开始报警
@property (nonatomic, assign) NSInteger dealType;               //处理类型  ; for MVSP is 处理状态
@property (nonatomic, assign) NSInteger protocolType;           //协议类型；mvsp = 1 mvsp2 = busalarm
//@property (nonatomic, strong) NSString  *   gpsInfo;
@property (nonatomic, strong) OSIGPSInfo *  osGpsInfo;          //gps信息
@property (nonatomic, strong) NSString  *   alarmInfo;          //json
@property (nonatomic, assign) NSInteger   timeInfo;            //  CEIBA:UTC  ; MVSP :UNIX
@property (nonatomic, strong) NSString  *   dealUsr;            //处理人
@property (nonatomic, strong) NSString *   dealConent ;       // 处理内容
@property (nonatomic,strong) NSString *describe;                //报警描述
@property (nonatomic, strong) NSString *dt;                      //当地时间  1448 多时区新增

//add for MVSP 2015-9-24 
@property (nonatomic, assign)  NSInteger alarmFlag;             //报警标志
@property (nonatomic, assign)  NSInteger statusMark;             //状态
@property (nonatomic, strong)  NSString  *carLicenceID;         //车牌ID
@property (nonatomic, strong)  NSString  *carLicence;
@property (nonatomic, assign)  NSInteger alarmSource;             //报警来源
@property (nonatomic, assign)  NSInteger dealUsrID;             //报警来源
@property (nonatomic, assign)  NSInteger dealTimeInfo;            //  CEIBA:UTC  ; MVSP :UNIX
@property (nonatomic, assign)  NSInteger dealMethod;             //报警来源

@end

@interface OSIGPSInfo : NSObject

@property (nonatomic, assign) NSInteger locationState;
@property (nonatomic, assign) double    logitude;
@property (nonatomic, assign) double    latitude;
@property (nonatomic, assign) NSInteger speed;          // have enlaeged 100 times
@property (nonatomic, assign) NSInteger course;          // have enlaeged 100 times   地面航向
@property (nonatomic, assign) NSInteger high;          // 高度
@property (nonatomic, assign) NSInteger timeInfo;       //  CEIBA:UTC  ; MVSP :UNIX
@property (nonatomic, strong) NSString *dt;                      //当地时间  1448 多时区新增
@end



@interface OSIAlarmDealInfo : NSObject          // for MVSP  all NSMutable object Num = 1;

@property (nonatomic, strong) NSString          *  alarmDes;
@property (nonatomic, strong) NSMutableArray    * arryAlarmId;          //   NSString
@property (nonatomic, assign) NSInteger         dealType;               //   int nHandleType;//0:auto  1:snapshot 2:send shortmessage 3:remote talk 4:boradcast 5:listen  6:muaule
@property (nonatomic, strong) NSMutableArray    * arryAlarmType;   //NSNumber
@property (nonatomic, strong) NSMutableArray    * arryAlarmDeviceId; //NSString

//======= add for  mvsp   =========///
@property (nonatomic, strong) NSMutableArray    * arryAlarmCarLicenceID;   //NSNumber
@property (nonatomic, assign) NSInteger         * handTime;       //NSNumber


@end

@interface OSIReciveAlarmDealInfo : NSObject

@property   (nonatomic, strong) NSString * user;
@property   (nonatomic, assign) NSInteger   dealType;
@property   (nonatomic, strong) NSMutableArray * arryAlarmId; //NSString
@property   (nonatomic, strong) NSString * timeInfo;    //yyyy-mm-dd hh:mm:ss
@property   (nonatomic, strong) NSString * markInfo;

@end

//=======  add for MVSP  at 2015-10-4 =============//

//=================   end add     ================//

@interface OSIQueryAlarmCond : NSObject

@property   (nonatomic, strong) NSString * startTime;	//yyyy-mm-dd hh:mm:ss
@property   (nonatomic, strong) NSString * endTime;	//yyyy-mm-dd hh:mm:ss
@property   (nonatomic, strong) NSMutableArray * devId; //NSString   ; for MVSP is  vehicleID
@property   (nonatomic, assign) NSInteger alarmGrade;
@property	(nonatomic, assign) NSInteger dealType;             // for MVSP is null
@property	(nonatomic, assign) NSInteger alarmType;            // for mVSP 0 is all
@property	(nonatomic, assign) NSInteger alarmCurCount;        
@property	(nonatomic, assign) NSInteger curPageIndex;
@property   (nonatomic, assign) NSInteger lateTimeSec;      //s

@property   (nonatomic, assign) NSInteger strartAlarmIndex;        // for MVSP select History

@end



@interface OSIGroupInfo : NSObject

@property(nonatomic,assign) NSInteger     groupId;
@property(nonatomic,strong) NSString    * groupName;
@property(nonatomic,assign) NSInteger     groupFatherId;
@property(nonatomic,strong) NSString    * groupRemarks;

//add for MVSP 2015-09-21
@property(nonatomic,assign) NSInteger     groupType;        //组类型

@end

@interface OSIDeviceInfo : NSObject

@property(nonatomic,strong) NSString    * carLicence;       //车牌号
@property(nonatomic,assign) NSInteger    channelCount;      //通道数
@property(nonatomic,strong) NSString    * deviceId;         //设备ID
@property(nonatomic,strong) NSString    * deviceUserName;   //设备用户名
@property(nonatomic,strong) NSString    * devicePassWord;   //设备密码
@property(nonatomic,assign) NSInteger     groupId;           //组ID
@property(nonatomic,strong) NSString    * linkType;         //协议类型  124 121
@property(nonatomic,strong) NSString    * registerIp;       //注册地址
@property(nonatomic,assign) NSInteger     registerPort;     //注册端口
@property(nonatomic,strong) NSString    * transmitIp;       //转发地址,视频地址
@property(nonatomic,assign) NSInteger     transmitPort;     // 转发端口
@property(nonatomic,assign) NSInteger     channelEnable;    // 通道权限

//add for MVSP 2015-09-21
@property(nonatomic,strong) NSString     *carLicenceID;         //车牌ID
@property(nonatomic,assign) NSInteger     carTypeID;            //车辆类型ID
@property(nonatomic,strong) NSString    * carTypeName;          //车辆类型名字
@property(nonatomic,assign) NSInteger     plateColorID;

//车牌win码
@property (nonatomic, copy) NSString *CHASSISNO;

//车牌颜色ID
@property(nonatomic,strong) NSString    * plateColorName;       //车牌颜色名字
@property(nonatomic,strong) NSMutableArray  *manualListArry;



//手动处理报警ID列表  里面类型为NSNumber
@property(nonatomic,strong) NSString    * simCardNO;            //手机号
@property(nonatomic,strong) NSMutableArray  *diverNameArry;        //驾驶员名字列表  里面类型为NSNumber
@property(nonatomic,strong) NSString    * uapIp;                //接入服务器地址
@property(nonatomic,assign) NSInteger     uapPort;              //接入服务器端口
@property(nonatomic,strong) NSString * MrsIP;					//媒体服务器IP
@property(nonatomic,assign) NSInteger MrsPort;					//媒体服务器端口
@property(nonatomic,strong) NSString    * mrsSearchIP;      //s17地址
@property(nonatomic,assign) NSInteger     mrsSearchPort;	//s17端口
@property(nonatomic,assign) NSInteger protocol;             //视频协议

@end

typedef enum : NSUInteger {
    DIRECTION_UPLINK = 1,//上行
    DIRECTION_DOWNLINK,//下行
} DIRECTION_TYPE;


//add for bus business
@interface OSIBusstationInfo : NSObject

@property(nonatomic,strong)NSString* busStationName;
@property(nonatomic,strong)NSNumber* busStationID;
@property(nonatomic,strong)NSString* busStationCode;
@property(nonatomic,strong)NSNumber* nextStationDistance;
@property(nonatomic,assign)double    longitude;
@property(nonatomic,assign)double    latitude;
@property(nonatomic,strong)NSNumber* radius;
@property(nonatomic,assign)DIRECTION_TYPE direction;
@property(nonatomic,strong)NSString* remark;

@end

@interface OSIBusLineInfo : NSObject

@property(nonatomic,strong)NSNumber* lineID;
@property(nonatomic,assign)NSInteger sendType;//发车模式
@property(nonatomic,strong)NSString* lineCode;
@property(nonatomic,strong)NSString* lineName;
@property(nonatomic,assign)BOOL isAnnulus;//环形标志
@property(nonatomic,assign)NSInteger scheduleMode;//调度模式
@property(nonatomic,assign)BOOL     isOperations;//是否运营
@property(nonatomic,assign)BOOL     isLongTransport;
@property(nonatomic,assign)NSInteger groupID;
@property(nonatomic,assign)NSInteger limitedSpeed;
@property(nonatomic,strong)NSNumber* lineDistance;//km

@property(nonatomic,strong)NSMutableArray<OSIBusstationInfo*>* uplinkStations;
@property(nonatomic,strong)NSMutableArray<OSIBusstationInfo*>* downlinkStations;

@property(nonatomic,strong)NSString* remark;

@end

@interface OSIBlanceInfo : NSObject

@property(nonatomic,strong) NSString    * version;
@property(nonatomic,strong) NSString    * playbackIp;
@property(nonatomic,assign) NSInteger     playbackPort;
@property(nonatomic,strong) NSString    * searchIp;
@property(nonatomic,assign) NSInteger     searchPort;
@property(nonatomic,strong) NSString    * addrdataIp;
@property(nonatomic,assign) NSInteger     addrdataPort;
@property(nonatomic,strong) NSString    * msgIp;
@property(nonatomic,assign) NSInteger     msgPort;
@property(nonatomic,strong) NSString    * gtIP;
@property(nonatomic,assign) NSInteger     gtPort;
@property(nonatomic,strong) NSString    * adsIp;
@property(nonatomic,assign) NSInteger     adsPort;
@property(nonatomic,strong) NSString    * evidenceIp;
@property(nonatomic,assign) NSInteger     evidencePort;
@property(nonatomic,strong) NSString    * wcmsIp;
@property(nonatomic,assign) NSInteger     wcmsPort;
@property(nonatomic,strong) NSString    * remotesetIp;
@property(nonatomic,assign) NSInteger     remotesetPort;
@property(nonatomic,strong) NSString    * clientgateIp;
@property(nonatomic,assign) NSInteger     clientgatePort;
@property(nonatomic,strong) NSString    * regKey;
@property(nonatomic,strong) NSString    *alphaIp;
@property(nonatomic,assign) NSInteger	alphaPort;
@property(nonatomic,assign) NSInteger	safetyPort;
@property(nonatomic,assign) NSInteger alarmSvrPort;
@property(nonatomic,strong) NSMutableArray * cmdArray;//用户权限信息 红树林平台
@end

@interface OSILogInfo : NSObject

@property(nonatomic,strong) NSString *userName;
@property(nonatomic,assign) NSInteger clientType;
@property(nonatomic,strong) NSString *logType;
@property(nonatomic,strong) NSString *logContent;
@property(nonatomic,assign) NSInteger logTime;//utc time
@property(nonatomic,strong) NSString *vehicleID;

@end
