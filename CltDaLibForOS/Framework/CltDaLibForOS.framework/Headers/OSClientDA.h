//
//  OSClientDA.h
//  CltDaLibForMac
//
//  Created by 许 飞 on 15-3-5.
//  Copyright (c) 2015年 cqrm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import  "OSClientOperation.h"
#import "OSDefine.h"
#import "OSPublic.h"

@interface OSInterFace : NSObject

@property (nonatomic,strong) OSIHandler *IHandeler;
@property (nonatomic,strong) OSIAlarm *IAlarm;
@property (nonatomic,strong) OSIConn *IConn;
@property (nonatomic,strong) OSIGPS *IGPS;
@property (nonatomic,strong) OSIDevice *IDevice;

-(id) initWithPlatType:(PLATTYPE) type;

@end






