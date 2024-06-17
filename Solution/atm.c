#include<stdio.h>
void main(){
    int balance, withdraw;
    scanf("%d %d",&balance,&withdraw);

    if(balance >= withdraw){
        printf("%d",(balance - withdraw));
    }
    else{
        printf("Unable to withdraw money.");
    }
}