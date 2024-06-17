#include<stdio.h>
void main(){
    int option, credits;
    scanf("%d %d",&option, &credits);
    int price;
    if(option == 1){
        if(credits <= 6){
            price = 11000;
        }
        else if(credits >= 7 && credits <= 11){
            price = 18000;
        }
        else if(credits >= 12 && credits <= 22){
            price = 30000;
        }
        else{
            price = 30000 + ((credits - 22) * 1500);
        }
    }
    else if(option == 2){
        price = 1500 * credits;
    }
    printf("%d",price);
}