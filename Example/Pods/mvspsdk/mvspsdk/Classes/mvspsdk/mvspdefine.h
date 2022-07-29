//
//  mvspdefine.h
//  mvspsdk
//
//  Created by xufei on 8/27/15.
//  Copyright (c) 2015 xufei. All rights reserved.
//

#ifndef mvspsdk_mvspdefine_h
#define mvspsdk_mvspdefine_h

/////*****MVSP Json Key********/////
#define HEAD		"HEAD"
#define MVSPPARAM		"PARAM"
#define ERRORCODE	"ERRORCODE"
#define	JID_ERRORVALUE	"ERRORVALUE"
#define VERSION		"VERSION"
#define TRANSNO		"TRANSNO"
#define SESSIONID	"SESSIONID"
#define MSGTYPE		"MSGTYPE"
#define MSGID		"MSGID"
#define	JID_PROTOCOLTYPE	"PROTOCOLTYPE"

#define CONDITION	"CONDITION"
#define INDEX		"INDEX"
#define ROWS		"ROWS"
#define TOTAL		"TOTAL"
#define EMPTY		""

//ª˘¥°“µŒÒ ˝æ›∂®“Â π´π≤≤ø∑÷
#define ROLE_ID             "ROLEID"
#define USER_ID             "USERID"
#define GROUP_ID            "GROUPID"
#define GROUP_NAME			"GROUPNAME"
#define CMD_ID_LIST			"CMDIDLIST"
#define CLIENTTYPE          "CLIENTTYPE"

#define USER_NAME           "USERNAME"
#define PASSWORD            "PASSWORD"
#define	JID_REGKEY			"REGKEY"
#define FORCE_LOGIN         "FORCELOGIN"
#define FORCE_FLAG          1
#define GROUP_ID_LIST		"GROUPIDLIST"
#define	GROUPLIST			"GROUPLIST"
#define NAME				"NAME"

#define ADDRESS             "ADDRESS"
#define TELNO				"TELNO"
#define DESCRIPTION			"DESCRIPTION"
#define EMAIL               "EMAIL"
#define VEHICLE_LICENSE		"VEHICLELICENSE"
#define LONGTITUDE			"LONGTITUDE"
#define LATITUDE			"LATITUDE"

#define	JID_SERVERIP		"SERVERIP"
#define	JID_SERVERPORT		"SERVERPORT"
#define	JID_STREAMID		"STREAMID"

#define	JID_PACKCOUNT		"PACKCOUNT"
#define	JID_PACKINDEX		"PACKINDEX"

// ’˚ ˝¿‡–Õ∫Õ◊÷∑˚¥Æ¿‡–Õµƒ≥µ≈∆∫≈¬Î
#define	JID_VEHICLES		"VEHICLES"
#define	JID_VEHICLEID		"VEHICLEID"
#define	JID_DEVICEID		"DEVICEID"
#define	JID_REGTIME			"REGTIME"
#define	JID_CHANNEL			"CHANNEL"
#define	JID_CHANNELNO		"CHANNELNO"
#define	JID_STREAMTYPE		"STREAMTYPE"
#define	JID_DATATYPE		"DATATYPE"
#define	JID_STATUS			"STATUS"
#define	JID_SERVERID		"SERVERID"
#define	JID_CTRLFLAG		"CTRLFLAG"
#define	JID_PLAYSPEED		"PLAYSPEED"

#define	JID_GPSINFO			"GPSINFO"
#define	JID_ALARMFLAG		"ALARMFLAG"
#define	JID_ALARM			"ALARM"
#define	JID_STATUSMARK		"STATUSMARK"
#define	JID_LAT				"LAT"
#define	JID_LNG				"LNG"
#define	JID_GPSLNG			"GPSLNG"
#define	JID_GPSLAT			"GPSLAT"
#define	JID_SLNG			"SLNG"
#define	JID_SLAT			"SLAT"
#define	JID_ELNG			"ELNG"
#define	JID_ELAT			"ELAT"
#define	JID_ALTITUDE		"ALTITUDE"
#define	JID_GPSSPEED		"GPSSPEED"
#define	JID_SSPEED			"SSPEED"
#define	JID_ESPEED			"ESPEED"
#define	JID_ANGLE			"ANGLE"
#define	JID_GPSTIME			"GPSTIME"
#define	JID_STIME			"STIME"
#define	JID_ETIME			"ETIME"
#define	JID_ITEMID			"ITEMID"
#define	JID_ITEMVALUE		"ITEMVALUE"
#define	JID_POSITIONTYPE	"POSITIONTYPE"
#define	JID_ZONEID			"ZONEID"
#define	JID_DIRECTION		"DIRECTION"
#define	JID_RESULT			"RESULT"
#define	JID_DRIVETIME		"DRIVETIME"
#define	JID_ITEMLIST		"ITEMLIST"
#define	JID_MILEAGE			"MILEAGE"
#define	JID_POSITIONS		"POSITIONS"
#define	JID_LOCATION		"LOCATION"
#define	JID_HUSER			"HUSER"
#define	JID_MAXSPEED		"MAXSPEED"

#define	JID_ALARMLIST		"ALARMLIST"
#define	JID_ALARMSOURCE		"ALARMSOURCE"
#define	JID_TIME			"TIME"
#define	JID_HTIME			"HTIME"
#define	JID_SPEED			"SPEED"
#define	JID_ALARMID			"ALARMID"
#define	JID_BIDLIST			"BIDLIST"
#define	JID_EIDLIST			"EIDLIST"
#define	JID_TYPE			"TYPE"
#define	JID_HTYPE			"HTYPE"
#define	JID_ALARMTYPE		"ALARMTYPE"
#define	JID_TOTALCOUNT		"TOTALCOUNT"
#define	JID_VIDEOTYPE		"VIDEOTYPE"
#define	JID_PLAYTYPE		"PLAYTYPE"
#define	JID_STARTTIME		"STARTTIME"
#define	JID_ENDTIME			"ENDTIME"

#define	JID_IMAGELIST		"IMAGELIST"
#define	JID_IMAGEURLS		"IMAGEURLS"
#define	JID_PLATECOLOR		"PLATECOLOR"
#define EVENT_FIX_SESSION_ID  "MVSP_STREAMAX_EVENT"
#define	JID_STOREDEV		"STOREDEV"

#define	JID_RECORDTYPE		"RECORDTYPE"
#define	JID_SEARCHMODE		"SEARCHMODE"
#define	JID_CALENDARS		"CALENDARS"
#define	JID_DATE			"DATE"
#define	JID_RESULT			"RESULT"
#define	JID_RESALARM		"RESALARM"
#define	JID_TIMESEGLIST		"TIMESEGLIST"
#define	JID_FILELIST		"FILELIST"
#define	JID_FILESIZE		"FILESIZE"
#define	JID_FILEID			"FILEID"
#define	JID_DEVICETYPE		"DEVICETYPE"

// ∫Õ–≠“È√ª”–πÿœµµƒ“ª–©∂®“Â
#define	JID_CMDTYPE			"CMDTYPE"
#define	JID_CONNECTION		"CONNECTION"
#define	JID_STATE			"STATE"
#define	JID_FROM			"FROM"
#define	JID_REASON			"REASON"
#define	JID_RECVWLEN		"RECVWLEN"
#define	JID_RECONNECTSEC	"RECONNECTSEC"
#define	JID_LOCALFUNCTION	"LOCALFUNCTION"
#define	JID_VIDEOWINFLAG	"VIDEOWFLAG"
#define	JID_VIDEOWINHDLE	"VIDEOWHANDLE"
#define	JID_NORESPONSE		"NORESPONSE"
#define	JID_CTSSTATE		"CTSSTATE"		// connection to server state
#define	JID_VIDEOWGRPID		"VIDEOWGRPID"
#define	JID_CLOSERVIDEO		"CLOSERVIDEO"
#define	JID_OPENRSOUND		"OPENRSOUND"
#define	JID_CLOSERSOUND		"CLOSERSOUND"
#define	JID_DOWNLOADSTATE	"DOWNLOADSTATE"
#define	JID_PLAYSTATE		"PLAYSTATE"
#define	JID_OPENVSCMD		"OPENVIDEOSRCCMD"
#define	JID_OPENRVIDEO		"OPENRVIDEO"
#define	JID_VIDEOWSELCHG	"VIDEOWINSELCHANGE"
#define	JID_VWINGROUP		"VWINGROUP"
#define	JID_FILENAME		"SAVETO"
#define	JID_FAILED			"FAILED"
#define	JID_CMDLIST			"CMDLIST"
#define	JID_BODYSTRING		"BODYSTRING"
#define	JID_DISPLAY			"DISPLAY"
#define	JID_BYTES			"BYTES"
#define	JID_CAPWAY			"CAPWAY"

// ¥∞ø⁄π‹¿Ìµƒ≤Œ ˝
#define	JID_WINDOW_PAR		"PARAM"
#define	JID_WINDOW_SHOW		"SHOW"
#define	JID_WINDOW_WNAME	"WINNAME"
#define	JID_WINDOW_LAYOUT	"LAYOUT"
#define	JID_WINDOW_PAGE		"PAGE"
#define	JID_WINDOW_COLOR	"COLORS"
#define	JID_WINDOW_CLRPNAME	"PARNAME"
#define	JID_WINDOW_CLRVALUE	"COLORV"
#define	JID_WINDOW_MMODE	"MMODE"

//*******MVSP Message Head***********//
struct MVSP_NET_HEAD {
    int Magic;
    int MsgLength;
    int MsgType;
    int MsgSum;
};

#pragma pack(1)


struct MVSP_NET_HEAD2{
    int  Magic;
    int  MsgLen;
    int  MsgID;
    int  TransNO;
    char Version;
    char CheckSum;
};

struct MVSP_RespFromServer{
    unsigned int  MsgID;
    unsigned char errorCode;
};


struct MVSP_LoginToServer{
    unsigned char loginType;
    unsigned char clientType;
    unsigned char *regKey;
};


struct MVSP_RequestGPSInfo{
    unsigned int vehicleID;
    unsigned char requestType;//0 request  1 cancel
    unsigned int  requestBit;//bit0- gps  bit1-alarm
};

struct MVSP_808_Head {
    unsigned short msgID;
    unsigned short msgFlag;
    unsigned char  szPhoneNumber[6];
    unsigned short msgNumber;
};

struct MVSP_808_BusToStationInfo {
    unsigned int lineNumber;
    unsigned char stationRunType;//1:arrive  2:leave
    unsigned char workType;//0x01-uplink   0x02-downlink
    unsigned int stationNumber;
    unsigned char stationSequenceID;
    unsigned char  flag;
    unsigned int  latidute;
    unsigned int  longidute;
    unsigned short high;
    unsigned short speed;// 1/10 km/h
    unsigned short angle;
    unsigned char  szTime[6];//bcd code
    unsigned short passngerNum;
    unsigned char  doorNum;
//    unsigned char passngerFlag;
    
};

struct MVSP_808_BusAlarmInfo{
    unsigned int lineNum;
    unsigned char alarmType;
    short         alarmValue;
    short         alarmStandard;
    unsigned int  latitude;
    unsigned int  longitude;
    short         high;
    unsigned short speed;
    unsigned short angle;
    unsigned char  szTime[6];
    unsigned char  bufaFlag;    
};

#pragma pack()

//*******MVSP Protocol Define*********//
#ifndef MVSP_PROTOCOL_VERSION
#define MVSP_PROTOCOL_VERSION 0x1000   /*V1.0.00*/
#endif

/*
 øÕªß∂À«Î«Û∫ÕœÏ”¶œ˚œ¢¿‡–Õ
 */

//◊È÷Øº‹ππ
#define CLIENT_MSG_COMMON_ADD_GROUP_NOTIFY      0x2010
#define CLIENT_MSG_COMMON_DELETE_GROUP_NOTIFY  0x2011
#define CLIENT_MSG_COMMON_MODIFY_GROUP_NOTIFY  0x2012

//”√ªß
#define CLIENT_MSG_COMMON_ADD_USER_NOTIFY       0x2020
#define CLIENT_MSG_COMMON_DELETE_USER_NOTIFY    0x2021
#define CLIENT_MSG_COMMON_MODIFY_USER_NOTIFY    0x2022

//≥µ¡æ
#define CLIENT_MSG_COMMON_ADD_VEHICLE_NOTIFY       0x2020
#define CLIENT_MSG_COMMON_DELETE_VEHICLE_NOTIFY    0x2021
#define CLIENT_MSG_COMMON_MODIFY_VEHICLE_NOTIFY    0x2022

//Àæª˙
#define CLIENT_MSG_COMMON_ADD_DRIVER_NOTIFY       0x2020
#define CLIENT_MSG_COMMON_DELETE_DRIVER_NOTIFY    0x2021
#define CLIENT_MSG_COMMON_MODIFY_DRIVER_NOTIFY    0x2022

/************************************************************/
//Õ®”√”¶¥
#define CLIENT_MSG_COMMON_CLIENT_RESP 0xA000
#define CLIENT_MSG_COMMON_SERVER_RESP 0x1000

//–ƒÃ¯
#define CLIENT_MSG_COMMON_HEARTBEAT    0xA001
#define CLIENT_MSG_COMMON_HEARTBEAT_RESP  0x1001

//µ«¬Ω
#define CLIENT_MSG_COMMON_LOGIN_REQ          0xA003
//#define CLIENT_MSG_COMMON_LOGIN_RESP         0x1002
#define CLIENT_MSG_COMMON_FORCE_LOGOUT       0x1003

//◊È÷Øº‹ππ
#define CLIENT_MSG_COMMON_GROUP_REQ          0xA004
#define CLIENT_MSG_COMMON_GROUP_NOTIFY       0x1004

//≥µ¡æ–≈œ¢
#define CLIENT_MSG_COMMON_VEHICLE_REQ       0xA005
#define CLIENT_MSG_COMMON_VEHICLE_NOTIFY    0x1005

//Àæª˙–≈œ¢
#define CLIENT_MSG_COMMON_DRIVER_REQ        0xA006
#define CLIENT_MSG_COMMON_DRIVER_NOTIFY     0x1006

// µ ±–≈œ¢
#define CLIENT_MSG_COMMON_ONLINE_VEHICLE_REQ     0xA007
#define CLIENT_MSG_COMMON_ONLINE_VEHICLE_NOTIFY 0x1007

// GPS°¢±®æØÕ∆ÀÕ
#define CLIENT_MSG_COMMON_ONLINE_POSITION_NOTIFY	0x1008
#define CLIENT_MSG_COMMON_ONLINE_ALARM_NOTIFY	0x1009

// ≤‚ ‘Õ¯ÀŸ
#define	CLIENT_MSG_COMMON_BANDWIDTH_TEST_REQ	0xA00A
#define	CLIENT_MSG_COMMON_BANDWIDTH_TEST_NOTIFY	0x100A

// ªÒ»°√ΩÃÂ∑˛ŒÒ∆˜–≈œ¢
#define	CLIENT_MSG_COMMON_GETMEDIAIP_REQ		0xA100
#define	CLIENT_MSG_COMMON_GETMEDIAIP_RESP		0x1100

// …Ë±∏Õ∏¥´
#define	CLIENT_MSG_COMMON_DEVTRANS_REQ			0xA102
#define	CLIENT_MSG_COMMON_DEVTRANS_RESP			0x1102

//808“µŒÒœ‡πÿ≤π≥‰
//øÕªß∂À«Î«Û÷’∂À◊ ¡œ
#define CLIENT_MSG_D808_TERMINAL_INFO_REQ    0xA103
#define CLIENT_MSG_D808_TERMINAL_INFO_RESP   0x1103

//øÕªß∂À≤È—Øœ¬∑¢µƒŒƒ±æœ˚œ¢
#define CLIENT_MSG_D808_SEARCH_SEND_MSG_REQ    0xA104
#define CLIENT_MSG_D808_SEARCH_SEND_MSG_RESP   0x1104

//øÕªß∂À≤È—Øœ¬∑¢µƒÃ·Œ  ˝æ›
#define CLIENT_MSG_D808_SEARCH_QUESTION_REQ    0xA106
#define CLIENT_MSG_D808_SEARCH_QUESTION_RESP   0x1106

//øÕªß∂À≤È—Øœ¬∑¢µƒµÁª∞±æ ˝æ›
#define CLIENT_MSG_D808_SEARCH_CONTACT_REQ     0xA108
#define CLIENT_MSG_D808_SEARCH_CONTACT_RESP    0x1108

#define CLIENT_MSG_D808_SAVE_POINT_REQ     0xA109          /* øÕªß∂À±£¥Êµ„ ˝æ› */
#define CLIENT_MSG_D808_SAVE_LINE_REQ      0xA10A           /* øÕªß∂À±£¥Êœﬂ ˝æ› */
#define CLIENT_MSG_D808_SAVE_RECT_REQ      0xA10B           /* øÕªß∂À±£¥Êæÿ–Œ«¯”Ú ˝æ› */
#define CLIENT_MSG_D808_SAVE_POLYGON_REQ   0xA10C          /* øÕªß∂À±£¥Ê∂‡±ﬂ–Œ«¯”Ú ˝æ› */
#define CLIENT_MSG_D808_SAVE_CIRCLE_REQ    0xA10D          /* øÕªß∂À±£¥Ê‘≤–Œ«¯”Ú ˝æ› */

#define CLIENT_MSG_D808_SEARCH_ZONE_REQ        0xA10E         /* øÕªß∂À≤È—Øµ„°¢œﬂ°¢√Ê ˝æ› */
#define CLIENT_MSG_D808_SEARCH_POINT_RESP      0x110E       /* øÕªß∂À≤È—Øµ„ ˝æ›œÏ”¶ */
#define CLIENT_MSG_D808_SEARCH_LINE_RESP       0x110F        /* øÕªß∂À≤È—Øœﬂ ˝æ›œÏ”¶ */
#define CLIENT_MSG_D808_SEARCH_RECT_RESP       0x1110        /* øÕªß∂À≤È—Øæÿ–Œ ˝æ›œÏ”¶ */
#define CLIENT_MSG_D808_SEARCH_POLYGON_RESP    0x1111     /* øÕªß∂À≤È—Ø∂‡±ﬂ–Œ ˝æ›œÏ”¶ */
#define CLIENT_MSG_D808_SEARCH_CIRCLE_RESP     0x1112      /* øÕªß∂À≤È—Ø‘≤–Œ ˝æ›œÏ”¶ */

#define CLIENT_MSG_D808_SEARCH_ZONE_RECORD_REQ    0xA113 /* øÕªß∂À≤È—Øœ¬∑¢µƒœﬂ¬∑ªÚ«¯”Ú ˝æ› */
#define CLIENT_MSG_D808_SEARCH_ZONE_RECORD_RESP   0x1113 /* øÕªß∂À≤È—Øœ¬∑¢µƒœﬂ¬∑ªÚ«¯”Ú ˝æ›œÏ”¶ */

#define CLIENT_MSG_D808_SEARCH_GPS_TRACK_REQ     0xA114    /* øÕªß∂À≤È—Ø÷’∂À¿˙ ∑πÏº£ */
#define CLIENT_MSG_D808_SEARCH_GPS_TRACK_RESP    0x1114   /* øÕªß∂À≤È—Ø÷’∂À¿˙ ∑πÏº£œÏ”¶ */

#define CLIENT_MSG_D808_SAVE_LINE_LIMIT_SPEED_REQ      0xA116     /* øÕªß∂À±£¥Ê∑÷¬∑∂ŒœﬁÀŸ ˝æ› */
#define CLIENT_MSG_D808_SEARCH_LINE_LIMIT_SPEED_REQ    0xA117   /* øÕªß∂À≤È—Ø∑÷¬∑∂ŒœﬁÀŸ ˝æ› */
#define CLIENT_MSG_D808_SEARCH_LINE_LIMIT_SPEED_RESP   0x1117  /* øÕªß∂À≤È—Ø∑÷¬∑∂ŒœﬁÀŸ ˝æ›œÏ”¶ */

#define CLIENT_MSG_D808_SEARCH_EVENT_LIST_REQ     0xA119     /* øÕªß∂À≤È—Ø ¬º˛¡–±Ì */
#define CLIENT_MSG_D808_SEARCH_EVENT_LIST_RESP    0x1119    /* øÕªß∂À≤È—Ø ¬º˛¡–±ÌœÏ”¶ */

#define CLIENT_MSG_D808_SEARCH_CONTACT_LIST_REQ     0xA11A   /* øÕªß∂À≤È—ØµÁª∞±æ¡–±Ì */
#define CLIENT_MSG_D808_SEARCH_CONTACT_LIST_RESP    0x111A  /* øÕªß∂À≤È—ØµÁª∞±æ¡–±ÌœÏ”¶ */

#define CLIENT_MSG_D808_SEARCH_QUESTION_LIST_REQ     0xA11B   /* øÕªß∂À≤È—ØÃ·Œ ¡–±Ì */
#define CLIENT_MSG_D808_SEARCH_QUESTION_LIST_RESP    0x111B  /* øÕªß∂À≤È—ØÃ·Œ ¡–±ÌœÏ”¶ */

#define CLIENT_MSG_D808_SAVE_OPERATE_LOG_REQ    0xA11C  /* øÕªß∂À±£¥Ê≤Ÿ◊˜»’÷æ */

//////////////////////////////////////////////////////////////////////////////
#define CLIENT_MSG_D808_SET_TERMINAL_CONFIG  0xA200   /* …Ë÷√÷’∂À≤Œ ˝ */
#define CLIENT_MSG_D808_GET_TERMINAL_CONFIG  0xA201   /* ≤È—Ø÷’∂À≤Œ ˝ */

#define CLIENT_MSG_D808_GET_SPECIFY_TERMINAL_CONFIG  0xA202   /* ≤È—Ø÷∏∂®÷’∂À≤Œ ˝ */
#define CLIENT_MSG_D808_GET_SPECIFY_TERMINAL_CONFIG_RESP  0x1202   /* ≤È—Ø÷’∂À≤Œ ˝”¶¥ */

#define CLIENT_MSG_D808_TERMINAL_CTRL  0xA203           /* ÷’∂Àøÿ÷∆ */
#define CLIENT_MSG_D808_GET_TERMINAL_ATTR_REQ  0xA204      /* ≤È—Ø÷’∂À Ù–‘ */
#define CLIENT_MSG_D808_GET_TERMINAL_ATTR_RESP  0x1204      /* ≤È—Ø÷’∂À Ù–‘”¶¥ */

#define CLIENT_MSG_D808_TERMINAL_GPS_NOTIFY  0x1101   /* Œª÷√–≈œ¢ª„±® */
#define CLIENT_MSG_D808_GET_LAST_GPS_POS_REQ   0xA210  /* Œª÷√–≈œ¢≤È—Ø */
#define CLIENT_MSG_D808_GET_LAST_GPS_POS_RESP  0x1210  /* Œª÷√–≈œ¢≤È—Ø”¶¥ */
#define CLIENT_MSG_D808_TEMP_GPS_TRACK_CTRL    0xA211  /* ¡Ÿ ±Œª÷√∏˙◊Ÿøÿ÷∆ */
#define CLIENT_MSG_D808_MANUAL_ALARM_ACK        0xA212  /* »Àπ§»∑»œ±®æØ–≈œ¢ */

#define CLIENT_MSG_D808_SEND_TXT_MSG_TO_TERMINAL_REQ   0xA220  /* Œƒ±æ–≈œ¢œ¬∑¢ */
#define CLIENT_MSG_D808_SET_EVENT_TO_TERMINAL_REQ   0xA221  /*  ¬º˛…Ë÷√ */
#define CLIENT_MSG_D808_TERMINAL_EVENT_REPORT   0x1221  /*  ¬º˛±®∏Ê */
#define CLIENT_MSG_D808_SEND_QUESTION_TO_TERMINAL_REQ   0xA222  /* Ã·Œ œ¬∑¢ */
#define CLIENT_MSG_D808_SEND_QUESTION_TO_TERMINAL_RESP   0x1222  /* Ã·Œ ”¶¥ */
#define CLIENT_MSG_D808_SUBSCRIBE_INFO_OPTION_REQ   0xA223  /* –≈œ¢µ„≤•≤Àµ•…Ë÷√ */
#define CLIENT_MSG_D808_SUBSCRIBE_INFO_OPTION_RESP  0x1223  /* –≈œ¢µ„≤•/»°œ˚ */

#define CLIENT_MSG_D808_PHONE_CALLBACK_REQ   0xA230  /* µÁª∞ªÿ≤¶ */
#define CLIENT_MSG_D808_SETUP_CONTACT_REQ   0xA231  /* …Ë÷√µÁª∞±æ */
#define CLIENT_MSG_D808_VEHICLE_CTRL_REQ   0xA232  /* ≥µ¡æøÿ÷∆ */
#define CLIENT_MSG_D808_VEHICLE_CTRL_RESP   0x1232  /* ≥µ¡æøÿ÷∆”¶¥ */

#define CLIENT_MSG_D808_ADD_CIRCLE_ZONE_REQ   0xA240  /* …Ë÷√‘≤–Œ«¯”Ú */
#define CLIENT_MSG_D808_DEL_CIRCLE_ZONE_REQ   0xA241  /* …æ≥˝‘≤–Œ«¯”Ú */
#define CLIENT_MSG_D808_ADD_RECT_ZONE_REQ   0xA242  /* …Ë÷√æÿ–Œ«¯”Ú */
#define CLIENT_MSG_D808_DEL_RECT_ZONE_REQ   0xA243  /* …æ≥˝æÿ–Œ«¯”Ú */
#define CLIENT_MSG_D808_ADD_POLYGON_ZONE_REQ   0xA244  /* …Ë÷√∂‡±ﬂ–Œ«¯”Ú */
#define CLIENT_MSG_D808_DEL_POLYGON_ZONE_REQ   0xA245  /* …æ≥˝∂‡±ﬂ–Œ«¯”Ú */
#define CLIENT_MSG_D808_ADD_LINE_ZONE_REQ   0xA246  /* …Ë÷√œﬂ¬∑ */
#define CLIENT_MSG_D808_DEL_LINE_ZONE_REQ   0xA247  /* …æ≥˝œﬂ¬∑ */

#define CLIENT_MSG_D808_GET_RECORDER_VERSION_REQ   0xA250  /* ≤…ºØº«¬º“«÷¥––±Í◊º∞Ê±æ */
#define CLIENT_MSG_D808_GET_RECORDER_VERSION_RESP   0x1250  /* ≤…ºØº«¬º“«÷¥––±Í◊º∞Ê±æœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_DRIVER_INFO_REQ   0xA251  /* ≤…ºØµ±«∞º› ª»À–≈œ¢ */
#define CLIENT_MSG_D808_GET_RECORDER_DRIVER_INFO_RESP   0x1251  /* ≤…ºØµ±«∞º› ª»À–≈œ¢œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_REAL_TIME_REQ   0xA252  /* ≤…ºØº«¬º“« µ ± ±º‰ */
#define CLIENT_MSG_D808_GET_RECORDER_REAL_TIME_RESP   0x1252  /* ≤…ºØº«¬º“« µ ± ±º‰œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_MAILAGE_REQ   0xA253  /* ≤…ºØ¿€º∆–– ª¿Ô≥Ã */
#define CLIENT_MSG_D808_GET_RECORDER_MAILAGE_RESP   0x1253  /* ≤…ºØ¿€º∆–– ª¿Ô≥ÃœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_PULSE_PARAM_REQ   0xA254  /* ≤…ºØº«¬º“«¬ˆ≥Âœµ ˝ */
#define CLIENT_MSG_D808_GET_RECORDER_PULSE_PARAM_RESP   0x1254  /* ≤…ºØº«¬º“«¬ˆ≥Âœµ ˝œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_VEHICLE_INFO_REQ   0xA255  /* ≤…ºØ≥µ¡æ–≈œ¢ */
#define CLIENT_MSG_D808_GET_RECORDER_VEHICLE_INFO_RESP   0x1255  /* ≤…ºØ≥µ¡æ–≈œ¢œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_STATUS_SIGNAL_CONFIG_REQ   0xA256  /* ≤…ºØº«¬º“«◊¥Ã¨–≈∫≈≈‰÷√–≈œ¢ */
#define CLIENT_MSG_D808_GET_RECORDER_STATUS_SIGNAL_CONFIG_RESP   0x1256  /* ≤…ºØº«¬º“«◊¥Ã¨–≈∫≈≈‰÷√–≈œ¢œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_UNIQUE_NUMBER_REQ   0xA257  /* ≤…ºØº«¬º“«Œ®“ª–‘±‡∫≈ */
#define CLIENT_MSG_D808_GET_RECORDER_UNIQUE_NUMBER_RESP   0x1257  /* ≤…ºØº«¬º“«Œ®“ª–‘±‡∫≈œÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_SPEED_REC_REQ   0xA258  /* ≤…ºØ÷∏∂®µƒ–– ªÀŸ∂»º«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_SPEED_REC_RESP   0x1258  /* ≤…ºØ÷∏∂®µƒ–– ªÀŸ∂»º«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_POSITION_REC_REQ   0xA259  /* ≤…ºØ÷∏∂®µƒŒª÷√–≈œ¢º«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_POSITION_REC_RESP   0x1259  /* ≤…ºØ÷∏∂®µƒŒª÷√–≈œ¢º«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_ACCIDENT_REC_REQ   0xA25A  /* ≤…ºØ÷∏∂®µƒ ¬π “…µ„º«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_ACCIDENT_REC_RESP   0x125A  /* ≤…ºØ÷∏∂®µƒ ¬π “…µ„º«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_OVER_TIME_REC_REQ   0xA25B  /* ≤…ºØ÷∏∂®µƒ≥¨ ±º› ªº«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_OVER_TIME_REC_RESP   0x125B  /* ≤…ºØ÷∏∂®µƒ≥¨ ±º› ªº«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_DRIVER_IDENTIFY_REQ   0xA25C  /* ≤…ºØ÷∏∂®µƒº› ª»À…Ì∑›º«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_DRIVER_IDENTIFY_RESP   0x125C  /* ≤…ºØ÷∏∂®µƒº› ª»À…Ì∑›º«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_EXTERNAL_POWER_REC_REQ   0xA25D  /* ≤…ºØ÷∏∂®µƒÕ‚≤øπ©µÁº«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_EXTERNAL_POWER_REC_RESP   0x125D  /* ≤…ºØ÷∏∂®µƒÕ‚≤øπ©µÁº«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_PARAM_MODIFY_REC_REQ   0xA25E  /* ≤…ºØ÷∏∂®µƒ≤Œ ˝–ﬁ∏ƒº«¬º */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_PARAM_MODIFY_REC_RESP   0x125E  /* ≤…ºØ÷∏∂®µƒ≤Œ ˝–ﬁ∏ƒº«¬ºœÏ”¶ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_SPEED_STATUS_LOG_REQ   0xA25F  /* ≤…ºØ÷∏∂®µƒÀŸ∂»◊¥Ã¨»’÷æ */
#define CLIENT_MSG_D808_GET_RECORDER_SPECIAL_SPEED_STATUS_LOG_RESP   0x125F  /* ≤…ºØ÷∏∂®µƒÀŸ∂»◊¥Ã¨»’÷æœÏ”¶ */

#define CLIENT_MSG_D808_SET_RECORDER_VEHICLE_INFO_REQ   0xA260  /* …Ë÷√≥µ¡æ–≈œ¢ */
#define CLIENT_MSG_D808_SET_RECORDER_INSTALL_TIME_REQ   0xA261  /* …Ë÷√º«¬º“«≥ı¥Œ∞≤◊∞»’∆⁄ */
#define CLIENT_MSG_D808_SET_RECORDER_STATUS_PARAM_REQ   0xA262  /* …Ë÷√◊¥Ã¨¡ø≈‰÷√–≈œ¢ */
#define CLIENT_MSG_D808_SET_RECORDER_TIME_REQ   0xA263  /* …Ë÷√º«¬º“« ±º‰ */
#define CLIENT_MSG_D808_SET_RECORDER_PULSE_PARAM_REQ   0xA264  /* …Ë÷√º«¬º“«¬ˆ≥Âœµ ˝ */
#define CLIENT_MSG_D808_SET_RECORDER_INIT_MAILAGE_REQ   0xA265  /* …Ë÷√≥ı º¿Ô≥Ã */
#define CLIENT_MSG_D808_SET_RECORDER_CONIG_RESP  0x1260  /* –– ªº«¬º≤Œ ˝…Ë÷√œÏ”¶ */
#define CLIENT_MSG_D808_ELECTRONIC_DOC_REPORT    0x1262  /* µÁ◊”‘Àµ•…œ±® */

#define CLIENT_MSG_D808_GET_DRIVER_IDENTIFY_REQ   0xA271  /* …œ±®º› ª‘±…Ì∑›–≈œ¢«Î«Û */
#define CLIENT_MSG_D808_GET_DRIVER_IDENTIFY_RESP   0x1271  /* º› ª‘±…Ì∑›–≈œ¢≤…ºØ…œ±® */

#define CLIENT_MSG_D808_MEDIA_EVENT_REPORT   0x1280  /* ∂‡√ΩÃÂ ¬º˛–≈œ¢…œ¥´ */
#define CLIENT_MSG_D808_MEDIA_DATA_UPLOAD_REQ   0x1281  /* ∂‡√ΩÃÂ ˝æ›…œ¥´ */
#define CLIENT_MSG_D808_MEDIA_DATA_UPLOAD_RESP   0xA281  /* ∂‡√ΩÃÂ ˝æ›…œ¥´”¶¥ */
#define CLIENT_MSG_D808_CAMERA_TAKE_PHOTO_REQ   0xA282  /* …„œÒÕ∑¡¢º¥≈ƒ…„√¸¡Ó */
#define CLIENT_MSG_D808_CAMERA_TAKE_PHOTO_RESP   0x1282  /* …„œÒÕ∑¡¢º¥≈ƒ…„√¸¡Ó”¶¥ */
#define CLIENT_MSG_D808_SEARCH_MEDIA_DATA_REQ   0xA283  /* ¥Ê¥¢∂‡√ΩÃÂ ˝æ›ºÏÀ˜ */
#define CLIENT_MSG_D808_SEARCH_MEDIA_DATA_RESP   0x1283  /* ¥Ê¥¢∂‡√ΩÃÂ ˝æ›ºÏÀ˜”¶¥ */
#define CLIENT_MSG_D808_UPLOAD_MEDIA_DATA_REQ   0xA284  /* ¥Ê¥¢∂‡√ΩÃÂ ˝æ›…œ¥´√¸¡Ó */
#define CLIENT_MSG_D808_START_VOICE_RECORD_REQ   0xA285  /* ¬º“Ùø™ º√¸¡Ó */
#define CLIENT_MSG_D808_SEARCH_SINGLE_MEDIA_DATA_REQ   0xA286  /* µ•Ãı¥Ê¥¢∂‡√ΩÃÂ ˝æ›ºÏÀ˜…œ¥´√¸¡Ó */

#define CLIENT_MSG_D808_PICTURE_PROCESS_RESP    0x1293

// ∂‘”¶µƒ–Ë“™”–∏ˆ«Î«Û∑˛ŒÒ∆˜IPµƒ√¸¡Ó
#define	CLIENT_MSG_D808_SEARCH_GPS_REQ			0xA304			// ≤È—Ø¿˙ ∑πÏº£
#define	CLIENT_MSG_D808_SEARCH_GPS_RESP			0x1304
#define	CLIENT_MSG_D808_SEARCH_PICTURE_REQ		0xA305			// Õº∆¨≤È—Ø«Î«Û
#define	CLIENT_MSG_D808_SEARCH_PICTURE_RESP		0x1305			// Õº∆¨≤È—Ø”¶¥
#define	CLIENT_MSG_D808_SEARCH_ALARM_REQ		0xA307			// ≤È—Ø±®æØ
#define	CLIENT_MSG_D808_SEARCH_ALARM_RESP		0x1307
#define CLIENT_MSG_D808_SEARCH_MULALARM_REQ		0xA30D			/*øÕªß∂À≤È—Ø∂‡*/
#define CLIENT_MSG_D808_SEARCH_MULALARM_RESP	0x130D

// ∂‘”¶…œ√Ê”√”⁄«Î«Û∑˛ŒÒ∆˜IPµƒ√¸¡Ó£¨…œ≤„≥Ã–Ú≤ª π”√’‚¡Ω∏ˆ√¸¡Ó
#define	CLIENT_MSG_D808_SALARM_SVRINFO_REQ		0xA30E
#define	CLIENT_MSG_D808_SALARM_SVRINFO_RESP		0x130E

#define CLIENT_MSG_D808_SEND_FULLY_DATA_TO_TERMINAL		0xA290  /*  ˝æ›œ¬––Õ∏¥´ */
#define CLIENT_MSG_D808_SEND_FULLY_DATA_TO_SERVER		0x1290  /*  ˝æ›…œ––Õ∏¥´ */
#define CLIENT_MSG_D808_SEND_COMPREE_DATA_TO_SERVER		0x1291  /*  ˝æ›—πÀı…œ±® */

/************************************************************/
#define	CLIENT_MEDIAS_COMMON_RESP			0xF000			// √ΩÃÂÕ®”√”¶¥
#define	CLIENT_MEDIAS_HEART					0xF001			// √ΩÃÂ–ƒÃ¯

//øÕªß∂À µ ± ”∆µ¡¨Ω”«Î«Û£¨∞¸¿®º‡Ã˝°¢∂‘Ω≤
#define CLIENT_MEDIAS_START_LIVETASK_REQ	0xF002
#define CLIENT_MEDIAS_START_LIVETASK_RESP	0x0002
#define	CLIENT_MEDIAS_STOP_LIVETASK_REQ		0xF003

// ≤È—Ø
#define	CLIENT_MEDIAS_SEARCHCAL_REQ			0xF004
#define	CLIENT_MEDIAS_SEARCHCAL_RESP		0x0004
#define	CLIENT_MEDIAS_SEARCHFILE_REQ		0xF005
#define	CLIENT_MEDIAS_SEARCHFILE_RESP		0x0005
#define	CLIENT_MEDIAS_SEARCHFTM_REQ			0xF006
#define	CLIENT_MEDIAS_SEARCHFTM_RESP		0x0006

#define	CLIENT_MEDIAS_AUDIO_TYPE			0xF009
#define	CLIENT_MEDIAS_PLAYCONTROL			0xF008

#define	CLIENT_MEDIAS_PLAYVIDEOFILE_REQ		0xF007		// øÕªß∂À‘∂≥Ãªÿ∑≈¬ºœÒŒƒº˛
#define	CLIENT_MEDIAS_PLAYVIDEOFILE_RESP	0x0007

// SDK±æµÿµƒ√¸¡ÓID
#define	VSCMD_BASENUM					0x200000		// ±æµÿ∂®“Âµƒø™ º√¸¡Ó∫≈
#define	VSCMD_OPEN_LIVE_SOUND			0x100001
#define	VSCMD_CLOSE_LIVE_SOUND			0x100002
#define	VSCMD_NORESPONSE				0x100003

// πÿ±’÷∏∂®øÿº˛÷–À˘”–¥Úø™µƒ ”∆µ
#define	VSCMD_CLOSE_ALLLIVEVIDEO		0x100004
#define	VSCMD_DRAGOPENVIDEO				0x100005
#define	VSCMD_OPENLVIDEO				0x100006
#define	VSCMD_CLOSELVIDEO				0x100007
#define	VSCMD_VIDEOSELECTCHANGE			0x100008
#define	VSCMD_RPDSTATE					0x10000A		// ‘∂≥Ãªÿ∑≈¬ºœÒŒƒº˛ ±µƒª∫≥ÂΩ¯∂»
#define VSCMD_RPPSTATE					0x10000B		// ‘∂≥Ãªÿ∑≈¬ºœÒŒƒº˛µƒªÿ∑≈Ω¯∂»
#define	VSCMD_CTSSTATE					0x10000C		// ¡¨Ω”∑˛ŒÒ∆˜ ß∞‹µƒÕ®÷™
#define	VSCMD_MULCMD					0x10000D		// ∂‡√¸¡Óµƒ◊È∫œÃÂ
#define	VSCMD_CAPTUREPIC				0x10000E		// ±æµÿ◊•Õº
#define	VSCMD_CAPTURE					0x100010		// ◊•ÕºÕ®÷™
#define	VSCMD_VWINGROUP					0x100011		//  ”∆µ¥∞ø⁄µƒ◊È∫œªÚ’ﬂ“≥√ÊÀ˜“˝”–∏ƒ±‰
#define	VSCMD_CAVBYOCX					0x100012		// ÷±Ω”πÿ±’∂‘”¶øÿº˛…œµƒÀ˘”– ”∆µ

/*
 UAPœÏ”¶øÕªß∂À¥ÌŒÛ¬Î∂®“Â
 */
enum MVSP_ERROR_CODE
{
    ERROR_CODE_UNKNOWN = -1,	// Œ¥÷™µƒ¥ÌŒÛ£¨÷ª”…PC∂À π”√°£
    ERROR_CODE_SUCCESS = 0, /*≥…π¶*/
    ERROR_CODE_USER_NOT_EXIST = 1, /*”√ªß√˚≤ª¥Ê‘⁄*/
    ERROR_CODE_PASSWORD = 2, /*√‹¬Î¥ÌŒÛ*/
    ERROR_CODE_DEACTIVE = 3, /*”√ªß±ªÀ¯∂®*/
    ERROR_CODE_USER_NOT_AUTHED = 4, /*”√ªßªπ√ª”–»œ÷§*/
    ERROR_CODE_USER_REPEAT_LOGIN = 5, /*”√ªß÷ÿ∏¥µ«¬Ω*/
    ERROR_CODE_USER_LOGIN_TIMEOUT = 6, /*”√ªßµ«¬Ω≥¨ ±*/
    ERROR_CODE_MSG_DATA_INVALID = 7, /*œ˚œ¢ ˝æ›≤ª∫œ∑®*/
    ERROR_CODE_DB_CONN_BROKEN = 8, /* ˝æ›ø‚¡¨Ω”∂œø™*/
    ERROR_CODE_TOKEN_INVALID = 9, /*token∑«∑®*/
    ERROR_CODE_SYSTEM_ERROR = 10, /*œµÕ≥“Ï≥£*/
    ERROR_CODE_CONNECT_SERVER_ERROR = 11, /*¡¨Ω”∆‰À¸∑˛ŒÒ∆˜ ß∞‹*/
    ERROR_CODE_INVALID_QUERY_CONDITION = 12, /*Œﬁ–ßµƒ≤È—ØÃıº˛*/
    ERROR_CODE_CANNOT_FIND_DEVICE_ORGID = 13, /*’“≤ªµΩ…Ë±∏∂‘”¶µƒ◊È÷Øº‹ππid*/
    ERROR_CODE_NO_PERMISSION = 14, /*øÕªß√ª”–»®œﬁ*/
    ERROR_CODE_REPEAT_SUBSCRIBE = 15, /*÷ÿ∏¥∂©‘ƒ*/
    ERROR_CODE_NOT_SUBSCRIBE                   = 16, /*øÕªß∂À√ª”–∂©‘ƒ*/
    ERROR_CODE_MRS_TEMPORARILY_NOT_AVAILABLE   = 17, /*MRS◊ ‘¥≤ª◊„, «Î…‘∫Û‘Ÿ ‘*/
    ERROR_CODE_NO_ORGINFO_DB                   = 18, /* ˝æ›ø‚÷–≤È≤ªµΩ◊È÷Øº‹ππ–≈œ¢*/
    ERROR_CODE_SERVER_RESPONSE_TIMEOUT         = 19, /*∑˛ŒÒ∆˜œÏ”¶≥¨ ±*/
    ERROR_CODE_UAP_TEMPORARILY_NOT_AVAILABLE   = 20, /*UAP¥ÔµΩ◊Ó¥ÛøÕªß∂À¡¨Ω” ˝*/
    ERROR_CODE_USER_NOT_LOGIN                  = 21, /*”√ªß√ª”–µ«¬Ω*/
    ERROR_CODE_CANNOT_FIND_VEHICLE_ORGID       = 22, /*’“≤ªµΩ≥µ¡æ∂‘”¶µƒ◊È÷Øº‹ππ*/
    ERROR_CODE_GPSS_TEMPORARILY_NOT_AVAILABLE  = 23, /*gpss ‘›≤ªø…”√*/
    ERROR_CODE_NOT_FIND_SERVICE_PLUGIN         = 24, /*∑˛ŒÒ≤Âº˛≤ªø…”√ªÚ≤≈∑˛ŒÒ≤Âº˛√˚≥∆”–ŒÛ*/
    ERROR_CODE_USER_HAS_BEEN_DELETED = 25, /*”√ªß“—æ≠±ª…æ≥˝*/
    ERROR_CODE_DB_ERROR = 26, /* ˝æ›ø‚≤Ÿ◊˜“Ï≥£*/
    ERROR_CODE_OBJECT_ALREADY_EXISTED = 27, /*“™Õ˘ ˝æ›ø‚÷–ÃÌº”µƒ∂‘œÛ“—æ≠¥Ê‘⁄*/
    ERROR_CODE_OBJECT_NOT_EXIST = 28, /*“™≤È’“µƒ∂‘œÛ≤ª¥Ê‘⁄*/
    ERROR_CODE_OPERATION_IS_FORBIDDEN = 29, /*≤ª‘ –Ì÷¥––¥À≤Ÿ◊˜*/
    ERROR_CODE_PARENT_GROUP_NOT_EXIST = 30, /*∏∏◊È÷Øº‹ππ≤ª¥Ê‘⁄*/
    ERROR_CODE_PARAM_INVALID          = 31,
    
    ERROR_CODE_SHRESENDCMD = 196,			// ΩˆPC∂À”√”⁄√¸¡Ó÷ÿ∑¢µƒ≤Ÿ◊˜
    ERROR_CODE_UNKNOWN_ERROR
};

//#pragma pack(push, 1)

#define MAGIC_LENGTH           4
#define CLIENT_TYPE_LENGTH     4
#define MSG_LENGTH_LENGTH      8
#define CRC_LENGTH             4
#define MAX_CLIENT_MSG_LENGTH (32 * 1024)

#define	RPLAY_CTRL_GO			0		// ’˝≥£ªÿ∑≈
#define	RPLAY_CTRL_PAUSE		1		// ‘›Õ£
#define	RPLAY_CTRL_END			2		// Ω· ¯
#define	RPLAY_CTRL_FAST			3		// øÏ∑≈
#define	RPLAY_CTRL_KFBACK		4		// πÿº¸÷°øÏÕÀ
#define	RPLAY_CTRL_DRAG			5		// Õœ∂Ø
#define	RPLAY_CTRL_KEYFRAME		6		// πÿº¸÷°≤•∑≈

// æ…–≠“È
/*
 #define	RVIDEO_TYPE_AV			0		// “Ù ”∆µ°£Œﬁ
 #define	RVIDEO_TYPE_VIDEO		0		//  ”∆µ
 #define	RVIDEO_TYPE_IPTALK		1		// À´œÚ∂‘Ω≤
 #define	RVIDEO_TYPE_MONITOR		2		// º‡Ã˝
 #define	RVIDEO_TYPE_BROADCAST	3		// ÷––ƒπ„≤•
 #define	RVIDEO_TYPE_TRANS		4		// Õ∏¥´
 /*/
#define	RVIDEO_TYPE_AV			0		// “Ù ”∆µ
#define	RVIDEO_TYPE_VIDEO		1		//  ”∆µ
#define	RVIDEO_TYPE_IPTALK		2		// À´œÚ∂‘Ω≤
#define	RVIDEO_TYPE_MONITOR		3		// º‡Ã˝
#define	RVIDEO_TYPE_BROADCAST	4		// ÷––ƒπ„≤•
#define	RVIDEO_TYPE_TRANS		5		// Õ∏¥´

#define MVSP_CMD_HEAD_LEN sizeof(MVSP_CMD_HEAD)
#define MVSP_CMD_HEAD_MAGIC  0x5053564D


//***********Common Function Define**********//

#if 0
#define	INTTONET(num)	ntohl(num)
#define	INTFROMNET(num)	htonl(num)
#else
#define	INTTONET(num)	num
#define	INTFROMNET(num)	num
#endif

#define GET_AES_DATA_LEN(len) ((((len) + (AES_STATE_LEN)) / (AES_STATE_LEN)) * (AES_STATE_LEN))


////****** struct define with protocol *****//////
struct _binprot_devhdr
{
    unsigned int trans_no;
    unsigned int typesend;		//不同的消息有不同的用法，gps不用,报警位报警的推送方式
    unsigned short itemCount;
    char   dataBuf[2];
};

struct _gps_device
{
    unsigned int m_VehicleID;      /* 车辆ID */
    unsigned int m_Time;           /* GPS  时间 */
    
    unsigned int m_AlarmFlag;     /* 报警标志 */
    unsigned int m_StatusFlag;    /* 状态位定义 包括南北纬 东西经 gps有效性定义*/
    
    unsigned int m_Longtitude;     /* 经度 度为单位 扩大10^6倍 精确到百万分之一度 */
    unsigned int m_Latitude;       /* 纬度 度为单位 扩大10^6倍 精确到百万分之一度 */
    
    unsigned short m_Height;        /* 高程 */
    unsigned short m_Speed;         /* 速度 808下面是以 1/10 km/h 为基准单位 */
    unsigned short m_Angle;         /* 行驱方向角度 0-359度 正北为0 顺时针 */
    
    unsigned char m_Temperture;    /* 温度 */
    unsigned char m_Reserve;         /* 保留 */
    
    unsigned int m_GpsMile;       /* 里程统计 km*/
};


enum ALARM_TRIGGER_FLAG
{
    ALARM_TRIGGER_START = 0,
    ALARM_TRIGGER_END
};
struct _alarm_device
{
    unsigned int m_VehicleID;
    enum ALARM_TRIGGER_FLAG m_Flag;           /* 报警开始或结束标记 0:start, 1:end */
    unsigned int m_AlarmType;     /* gps alarm status bit0-bit31,下标从1计算*/
    unsigned int m_AlarmSource;
    unsigned int m_StartTime;
    unsigned int m_EndTime;
    unsigned int m_GpsStatus;     /* bit0:有效位 bit1:经度方向 0 东经 1西经 bit2: 纬度方向 0 北纬 1 南纬 */
    unsigned int m_GpsLongitude;
    unsigned int m_GpsLatitude;
    unsigned short m_Altitude;		// 高度
    unsigned short m_Speed;
    unsigned short m_Angle;
    unsigned short reserved;
    char   m_AlarmUUID[40];
};


struct uapDevStatusInfo
{
    unsigned int m_VehicleSeqNo; //车辆Id
    char   m_DeviceID[16]; //设备ID
    unsigned int m_RegTime;	//注册时间
    unsigned short m_OrgID;	//组ID
    unsigned char  m_ChannelNum;	//通道号
    unsigned char  m_OnlineStatus;	//车辆状态
    unsigned char  m_DeviceType;	// 0:锐明设备 1:标准视频设备 2:其他 added on 2015.7.20
    unsigned char  reserved[3];
};

struct EVENT_HEAD
{
    unsigned int m_TransNo;
    unsigned short m_PackTotal;
    unsigned short m_PackIndex;		// ¥”1ø™ º£¨À˘“‘ «∑Ò”– ˝æ›÷ª–Ë“™≈–∂œ∆‰ «∑Ò¥Û”⁄0º¥ø…
    int m_EventCnt;
};


struct ALARM_INFO_EXTEND
{
    unsigned int m_VehicleID;
    unsigned int m_AlarmType;     /* gps alarm status bit0-bit31£¨œ¬±Í¥”1º∆À„ */
    unsigned int m_StartTime;
    unsigned int m_EndTime;
    unsigned int m_AlarmSource;    /* ±®æØ¿¥‘¥: 1…Ë±∏ 2 */
    unsigned int m_SGpsLongitude;
    unsigned int m_SGpsLatitude;
    unsigned int m_EGpsLongitude;
    unsigned int m_EGpsLatitude;
    unsigned int m_HandlePeople;
    unsigned int m_HandleTime;
    unsigned int m_HandleMethod;
    unsigned short m_SSpeed;
    unsigned short m_SAngle;
    unsigned short m_ESpeed;
    char	reserved[2];
    
    char   m_AlarmUUID[40];
};

struct EVENT_DATA_RESP
{
    struct EVENT_HEAD m_EventHead;
    unsigned int m_VehicleID;				/* µ•≥µ≤È—Ø ± ÃÓ≥‰≥µ¡æID  ∂‡≥µ≤È—Ø ±ÃÓ≥‰±æ¥Œ≤È—Øµƒ◊‹±®æØ ˝¡ø */
    struct ALARM_INFO_EXTEND alarmData[1];
};

struct vehicleDataInfo
{
    char  vehicleID[16];
    char videoIP[32];
    int  videoPort;
    char uapIP[32];
    int  uapPort;
};

struct queryAlarmInfo
{
    long long lStartTime; //utc time
    long long lendTime;   //utc time
    int  nAlarmType;  //0:all alarm type
    int  nStatusType; //0:all 1:has handle  2:hasn't handle
    int  nPageCount;
    int  nPageIndex;
};

struct handleAlarmInfo
{
    int nUserID;
    long long lHandelTime;
    int nHandleType;//0:auto  1:snapshot 2:send shortmessage 3:remote talk 4:boradcast 5:listen  6:muaule
};

struct ipAndPortInfo
{
    char szIP[32];
    int  nPort;
};

#endif
