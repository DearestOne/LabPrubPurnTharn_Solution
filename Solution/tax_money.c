#include<stdio.h>
void main(){
    int income;
    scanf("%d",&income);
    if(income <= 150000){
        printf("0");
    }
    else if(income >= 150001 && income <= 300000){
        int tax = ((income - 150000) * 5) / 100;
        printf("%d",tax);
    }
    else if(income >= 300001 && income <= 500000){
        int tax = 7500 + ((income - 300000) * 10) / 100;
        printf("%d",tax);
    }
    else if(income >= 500001 && income <= 750000){
        int tax = 27500 + ((income - 500000) * 15) / 100;
        printf("%d",tax);
    }
    else{
        int tax = 65000 + ((income - 750000) * 20) / 100;
        printf("%d",tax);
    }
}