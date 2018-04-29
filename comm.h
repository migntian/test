#ifndef __COMM_H__
#define __COMM_H__
#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>

#define SERVER_TYPE 1
#define CLIENT_TYPE 2

struct msgbuf{
    long mtype;
    char mtext[1024];
};

#define PATHNAME "."
#define PROJ_ID 0x6666

static int commMsgQueue(int flags);
int getMsgQueue();
int createMsgQueue();
int destroyMsgQueue(int msgid);
int sendMsg(int msgid,int who,char *msg);
int recvMsg(int msgid,int recvType,char out[]);

#endif
