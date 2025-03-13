#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int hour=0,minute=0,scond=0;
    while(1){
        system("cls");
        printf("%.2d :%.2d: %.2d\n",hour,minute,scond);
        fflush(stdout);
        scond++;
        if(scond ==60){
            minute+=1;
            scond=0;

        }
        if(minute==60){
            hour +=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            scond=0;

        }
    sleep(1);
    }
    return 0;
}