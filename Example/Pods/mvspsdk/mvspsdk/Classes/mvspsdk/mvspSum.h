//
//  mvspSum.h
//  mvspsdk
//
//  Created by xufei on 8/27/15.
//  Copyright (c) 2015 xufei. All rights reserved.
//

#ifndef __mvspsdk__mvspSum__
#define __mvspsdk__mvspSum__

#include <stdio.h>
#include <pthread.h>
#include "mvspdefine.h"
#include "mvsp_aesencode.h"
class CMvspSum {
    
public:
    CMvspSum();
    ~CMvspSum();
    
    
public:
    int setJsonEncrypt(int msgType,const char* pInput,int inputLen,char* pOutput);
    int getJsonEncrypt(int msgType,char* pInput,int inputLen,char* pOutpuf);
    
    
private:
    static CMyAESEncode m_AESEncode;
    pthread_mutex_t m_lock;
};

#endif /* defined(__mvspsdk__mvspSum__) */
