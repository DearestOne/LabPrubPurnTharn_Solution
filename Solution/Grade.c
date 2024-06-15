#include<stdio.h>
void main(){
    int score;
    scanf("%d",&score);
    if(score >= 80){
        printf("A");
    }
    else if(score >= 70 && score <= 79){
        printf("B");
    }
    else if(score >= 60 && score <= 69){
        printf("C");
    }
    else if(score >= 50 && score <= 59){
        printf("D");
    }
    else{
        printf("F");
    }
}