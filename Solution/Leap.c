#include<stdio.h>
void main(){
    int year;
    scanf("%d",&year);

    if(year % 400 == 0){
        printf("Leap");
    }
    else if(year % 100 == 0){
        printf("Not-Leap");
    }
    else if(year % 4 == 0){
        printf("Leap");
    }
    else{
        printf("Not-Leap");
    }
}