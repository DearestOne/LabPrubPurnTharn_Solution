#include<stdio.h>
void main(){
    int balance, option, value;
    scanf("%d %d %d",&balance,&option,&value);

    if(option == 1){
        if(value <= balance){
            printf("%d",(balance - value));
        }
        else{
            printf("Sorry, you can not withdraw money.");
        }
    }
    else if(option == 2){
        printf("%d",(balance + value));
    }
}