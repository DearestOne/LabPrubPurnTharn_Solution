#include<stdio.h>
void main(){
    int time;
    scanf("%d",&time);

    if(time < 0){
        printf("Can not be negative.");
    }
    else if(time >= 2400 || time % 100 >= 60){
        if(time >= 2400){
            printf("Hour error.\n");
        }
        if(time % 100 >= 60){
            printf("Minutes error.");
        }
    }
    else{
        if(time >= 500 && time <= 1000){
            printf("Morning");
        }
        else if(time >= 1001 && time <= 1500){
            printf("Noon");
        }
        else if(time >= 1501 && time <= 1859){
            printf("Evening");
        }
        else{
            printf("Night");
        }
    }
}