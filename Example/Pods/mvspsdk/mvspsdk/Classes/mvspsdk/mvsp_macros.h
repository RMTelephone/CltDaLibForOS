#ifndef MVSP_MACROS_H
#define MVSP_MACROS_H

//#pragma warning(disable : 4786)
//#pragma warning(disable : 4996)

#include <stdio.h>
#include <sys/time.h>



/******************base data type define *******************/

typedef long long          int64;
typedef int                int32;
typedef short              int16;
typedef char               int8;
typedef unsigned long long   uint64;
typedef unsigned int       uint32;
typedef unsigned short     uint16;
typedef unsigned char      uint8;


#define MAX_DWORD     int32(0x7FFFFFFF)
/************************************************/
#define LINUX_OK                0
#define LINUX_FAIL              -1

#define RET_OK                 0
#define RET_SUCCESS            0
#define RET_FAIL               -1

//memory operator
#define RET_INVALID_POINTER    -2
#define RET_INVALID_PARAM      -3
#define RET_NEW_FAILED         -4
#define RET_TIMEOUT            -5

//file operator
#define RET_OPEN_FAILED        -10
#define RET_SEEK_FAILED        -11
#define RET_WRITE_FAILED       -12
#define RET_READ_FAILED        -13

/**************************************************/
//common value define
#define MVSP_INVALID_VALUE      -1
#define MVSP_INVALID_ID          MVSP_INVALID_VALUE
#define MVSP_INVALID_HANDLE     -1//INVALID_SOCKET

#define MAX_PATH_LEN           255
#define TAIL_OF_STRING         '\0'

typedef unsigned long MY_HANDLE;

/**************************************************/
#define SHUT_RDWR SD_BOTH
/**************************************************/

#define MVSP_RELEASE_MESSAGE_BLOCK(mb) \
        do \
        { \
            (void)mb->Release(); \
            mb = NULL; \
        } while (0)

#define MVSP_RELEASE_ARRAY_MEMORY(pointer) \
        do \
        { \
            if (NULL != pointer) \
            { \
                delete [] pointer; \
                pointer = NULL; \
            } \
        } while (0)

#define MVSP_RELEASE_MEMORY(pointer) \
        do \
        { \
            if (NULL != pointer) \
            { \
                delete pointer; \
                pointer = NULL; \
            } \
        } while (0)

#define MVSP_CLOSE_FILE(handle) \
        do \
        { \
            if (MVSP_INVALID_HANDLE != handle) \
            { \
                close(handle); \
                handle = MVSP_INVALID_HANDLE; \
            } \
        } while (0)

#define MVSP_NEW_RETURN(pointer, type, retval) \
        do \
        { \
            try \
            { \
                (pointer) = new type; \
            } \
            catch(...) \
            { \
                (pointer) = NULL; \
                return retval; \
            } \
        } while (0)

#define MVSP_NEW_NORETURN(pointer, type) \
        do \
        { \
            try \
            { \
                (pointer) = new type; \
            } \
            catch(...) \
            { \
                (pointer) = NULL; \
            } \
        } while (0)


#endif