#ifndef __CDKEY_DEF_H
#define __CDKEY_DEF_H


//define NULLINT
#define     INT_VALUE_NULL      0

//plat	type	define
#define		PLAT_TYPE_WINDOW	1
#define		PLAT_TYPE_MAC		2
#define		PLAT_TYPE_IPHONE	6
#define		PLAT_TYPE_IPAD		7
#define		PLAT_TYPE_ANDRROIDPHONE	8
#define		PLAT_TYPE_PAD			9

//alarm grade
#define		ALARM_GRADE_1	1
#define		ALARM_GRADE_2	2
#define		ALARM_GRADE_3	3
#define		ALARM_GRADE_4	4

//deal type
#define		DEAL_TYPE_NODEAL 1
#define		DEAL_TYPE_DEAL	2

//block asnyc type
#define		CALL_BLOCK	1
#define		CALL_ASYNC	0

//alarm type
#define		ALARM_TYPE_NO				0	//no alarm
#define		ALARM_TYPE_VIDEOLOST		1	//video lost alarm
#define		ALARM_TYPE_MOVEDETECTION	2	//video move dectection
#define		ALARM_TYPE_MASK				3	//video mask
#define		ALARM_TYPE_STORGEEXCEPTION	4	//storge or hdd exception
#define		ALARM_TYPE_USERCURSOM		5	//user diy cursom 1
#define		ALARM_TYPE_USERCURSOM_2		6	//user diy cursom 2
#define		ALARM_TYPE_USERCURSOM_3		7	//user diy cursom 3
#define		ALARM_TYPE_USERCURSOM_4		8	//user diy cursom 4
#define		ALARM_TYPE_USERCURSOM_5		9	//user diy cursom 5
#define		ALARM_TYPE_USERCURSOM_6		10	//user diy cursom 6
#define		ALARM_TYPE_USERCURSOM_7		11	//user diy cursom 7
#define		ALARM_TYPE_USERCURSOM_8		12	//user diy cursom 8
#define		ALARM_TYPE_EMERGENCY		13	//Emergency
#define		ALARM_TYPE_LOWSPEED			14	//low speed
#define		ALARM_TYPE_HIGHSEEPD		15	//high speed
#define		ALARM_TYPE_VOLTAGE			16	//low voltage
#define		ALARM_TYPE_ACC				17	//acc

#define		ALARM_TYPE_FATIGUEDRIVING				18	//Fatigue Driving
#define		ALARM_TYPE_DANGERWARNING				19	//Danger Warning
#define		ALARM_TYPE_GNSSMODULESENDSFAULT				20	//'GNSS module sends fault
#define		ALARM_TYPE_GNSSANTENNAMISSEDORCUT				21	//GNSS antenna missed or cut
#define		ALARM_TYPE_GNSSANTENNASHO				22	//GNSS antenna short circuit
#define		ALARM_TYPE_MAINPOWERUNDERVOLTAGETERMINAL				23	//Main power undervoltage terminal
#define		ALARM_TYPE_TERMINALMAINPOWERFAILURE			24	//Terminal main power failure
#define		ALARM_TYPE_TERMINALLCDORDISPLAYFAILURE				25	//Terminal LCD or display failure
#define		ALARM_TYPE_TTSMODULEFAILURE				26	//TTS module failure
#define		ALARM_TYPE_CAMERAMALFUNCTION				27	//Camera malfunction
#define		ALARM_TYPE_ROADTRANSPORT				28	//Road transport permits IC card module failure
#define		ALARM_TYPE_OVERSPEEDWARNING				29	//Overspeed warning
#define		ALARM_TYPE_FATIGUEWARNING				30	//Fatigue warning
#define		ALARM_TYPE_DRIVINGACCUMULATEDOVERTIME				31	//Driving accumulated overtime that day
#define		ALARM_TYPE_TIMEOUTPRKING				32	//Timeout parking
#define		ALARM_TYPE_OUTOFAREA				33	//Out of area
#define		ALARM_TYPE_OUTOFLINE				34	//Out of line
#define		ALARM_TYPE_ROADSANDLACKOFTIME				35	//Roads and lack of time / long
#define		ALARM_TYPE_ROUTEDEVIATIONALARM				36	//Route deviation alarm
#define		ALARM_TYPE_VSSVEHICLEBREAKDOWN				37	//VSS vehicle breakdown
#define		ALARM_TYPE_ABNORMALVEHICLEFUEL				38	//Abnormal vehicle fuel
#define		ALARM_TYPE_VEHICLETHEFT			39	//Vehicle theft
#define		ALARM_TYPE_ILLEGALSHIFTVEHICLE				40	//Illegal fire vehicle
#define		ALARM_TYPE_ILLEGALFIREVEHICLE				41	//Illegal shift vehicle
#define		ALARM_TYPE_COLLISIONWARNING				42	//Collision warning
#define		ALARM_TYPE_ROLLOVERALARM				43	//Rollover alarm
#define		ALARM_TYPE_ILLEGALDOORALARM				44	//Illegal door alarm
#define		ALARM_TYPE_PLATFORMRUNNINGTIME			45	//latform running time cut the line alarm
#define		ALARM_TYPE_PLATFORMREGIONALPOLICE				46	//'Platform regional police
#define		ALARM_TYPE_PLATFORMLINESHIFT				47	//Platform line shift alarm
#define		ALARM_TYPE_PLATFORMSTAGING				48	//Platform staging speed alarm
#define		ALARM_TYPE_PLATFORMKEYPOINTALARM				49	//Platform key point alarm
#define		ALARM_TYPE_THEDRIVERCALLED				50	//The driver called detection alarm

//alarm tigger type, start or end 
#define		CMDTYPE_STARTALARM		2		//alarm start
#define		CMDTYPE_ENDALARM		1		//alarm end
#define		CMDTYPE_PREALARM		3		//Early warning 

//protocol type
#define		PROTOCOL_STAND			1		//normal
#define		PROTOCOL_UNKNOW			2

//connect server type
#define		CONN_TYPE_CLIENTACCESS	0		//connect client access server
#define		CONN_TYPE_BALANCE		1		//connect balance server
#define     CONN_TYPE_DEVICEADDRESS 2       //connect webservice for group&car info,don't connect uap or clientaccess

#define		GPS_V_TYPE_VALID		0		//valid gps data
#define		GPS_V_TYPE_MAYBE		1		//maybe gps data is valid
#define		GPS_V_TYPE_INVALID		2		//gps data is invalid

#define		DEV_STATUS_ONLINE		1
#define		DEV_STATUS_OFFLINE		0


//=============Alarm====Gps==============================

//alarm key pre  AK_
#define    AK_ZIP				"z"
#define    AK_GPSBSIZE			"b"
#define	   AK_GPSDATA			"d"
#define	   AK_GPSDEVICE		"d"
#define	   AK_ALARMID			"a"
#define    AK_ALARMTYPE		"y"

#define    AK_CMDTYPE			"z"
#define    AK_GPS				"p"
#define	   AK_ALARMINFO		"s"
#define	   AK_TIME				"t"
#define	   AK_DEALUSER			"u"
#define    AK_DEALINFO			"i"
#define    AK_GPSTYPE			"v"
#define    AK_GPSJ				"j"
#define	   AK_GPSW				"w"
#define	   AK_SPEED			"s"
#define	   AK_ANGLE			"c"
#define    AK_ALTITUDE			"h"

//alarm type key
//=========================STORE=========================================
#define    ATK_DISKTYPE			"t"
#define    ATK_DISKNUM			"i"
#define	   ATK_DISKERROR		"c"

//==========================USER=========================================
#define	   ATK_ALARMNAME		"n"
#define	   ATK_SHORTNAME		"r"

//==========================SPEED========================================
#define    ATK_MAXSPEED			"x"
#define    ATK_MINSPEED			"i"
#define	  ATK_DURATION			"t"

//============================VOL==============================
#define	   ATK_VOLTYPE			"l"
#define	   ATK_CURVOL			"v"
#define    ATK_MINVOL			"i"
#define    ATK_MAXVOL			"x"
//============================ACC==============================
#define	   ATK_ACCDIRE			"d"


enum	E_SVRERRCODE
{
	ES_UNKNOWERR = -1,	//未知错误
	ES_SUCCESS   = 0,	//成功
	ES_MEMNOENOUGH = 1,	//	分配内存失败
	ES_USERPASSERR=2,	//	用户名或者密码错误
	ES_EXECUTEFAILED=3,//	执行失败
    ES_OTHERCLINETLOGIN=13,
	//4	没有查询到相符的结果
	//5	没有权限
	//6	在线用户过多
	//7	任务存在
	//8	资源不足或任务满
	//9	通道非法
	//10	未编码
	//11	不支持主码流
	//12	不支持子码流
	//13	不支持手机码流
	//14	文件不存在
	//15	接收升级文件失败
	//16	升级文件校验失败
	//17	打开升级文件失败
	//18	没有该任务
	//19	其他用户正在配置
	//20	操作太频繁
	//21	升级用户过多
	//22	用户没用该权限
	//23	升级文件版本号相同
	//24	系统正在升级
	//25	数据库错误
	//26	参数错误
	//27	zip压缩失败
	//28	md5 码错误
	//29	无存储空间或存储介质
	//30	登录ftp服务器失败
	//31	未登陆
	//32	目标地址不可达
	//40	设备不在线

	//60	硬盘满
	//61	硬盘未格式化
	//62	硬盘读写错误
	//63	硬盘不录像
	//64	硬盘丢失
	//65	硬盘无法识别

	//498	端口错误或者为0
	//499	IP地址错误或者为空
	//500	发送数据失败
	//501	接收数据失败
	//502	端口冲突
	//503	连接redis服务器失败
	//504	从redis 获取数据失败
	//505	数据存入redis 失败
};

#endif
