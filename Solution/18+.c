#include<stdio.h>
void main(){
    int month,year;
    scanf("%d %d",&month,&year);

    if(2024 - year > 18){
        printf("Welcome");
    }
    else if(2024 - year == 18){
        if(month <= 6){
            printf("Welcome");
        }
        else{
            printf("Get Out!");
        }
    }
    else{
        printf("Get Out!");
    }
}