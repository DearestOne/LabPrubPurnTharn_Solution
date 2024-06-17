#include<stdio.h>
void main(){
    int bags;
    scanf("%d",&bags);

    if(bags % 3 == 0){
        printf("Sorry, we don't accept wet garbage.");
    }
    else{
        printf("Receive %d Baht.", (bags * 3));
    }
}