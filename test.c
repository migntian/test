#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
//#define ERR_EXIT(m)
//do
//{
//    perror(m);
//    exit(EXIT_FAILURE);
//
//}while(0)


//int my_strncmp(char *arr1,char *arr2,int count)
//{
//    while(count)
//    {
//        if(*arr1==*arr2)
//        {
//            arr1++;
//            arr2++;
//            count--;
//        }
//        if(*arr1>*arr2)
//        {
//            return 1;
//        }
//        else
//        {
//            return -1;
//        }
//
//    }
//    return 0;
//}
int main(int argc,char *argv[])
{
    mkfifo("tp",0644);
    int infd;
    infd = open("abc",O_RDONLY);
    if((infd == -1)
       perror("open");
    int outfd;
    outfd = open("tp",O_WRONLY);
    if(outfd == -1)
        perror("open");
    char buf[1024];
    int n;
    while((n = read(infd,buf,1024))>0)
    //int pipefd[2];
    //if((pipe(pipefd)) == -1)
    //    perror("pipe");
    //pid_t pid;
    //pid = fork();
    //if(pid == -1)
    //    perror("fork");
    //if(pid == 0)
    //{
    //    close(pipefd[0]);
    //    write(pipefd[1],"hello",5);
    //    close(pipefd[1]);
    //    exit(0);
    //}
    //close(pipefd[1]);
    //char buf[10] = {0};
    //read( pipefd[0],buf,10);
    //printf("buf = %s\n",buf);
    //return 0;


    

    //char arr1[10]="hello";
    //char arr2[10]="hello";
    //int ret=my_strncmp(arr1,arr2,3);
    //if(ret==1)
    //{
    //    printf("niubi");
    //}
    //else if(ret==0)
    //{
    //    printf("jiayou");
    //}
    //else
    //{
    //    printf("wudi");

    //}
    //return 0;
}
//int g_val = 0;
//int main()
//{
//	pid_t id = fork();
//	if(id < 0)
//	{
//		perror("fork");
//		return 0;
//
//	}
//	else if(id == 0)
//	{
//		g_val = 100;
//		printf("child[%d]:%d:%p\n",getpid(),g_val,&g_val);
//	}
//	else
//	{
//		printf("parent[%d]:%d:%p\n",getpid(),g_val,&g_val);
//	}
//	sleep(1);
//	return 0;
//}
