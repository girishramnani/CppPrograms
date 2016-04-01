#include<stdio.h>
#include<signal.h>
#include<sys/wait.h>
#include<stdlib.h>


int n;

void handler(int signum){
    n=0;
}

main(){

    signal(SIGINT,handler);
    while(1) {
     printf("Working %d \n",n++);
     sleep(1);
    }

}

