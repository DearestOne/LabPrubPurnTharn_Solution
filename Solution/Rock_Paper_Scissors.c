#include<stdio.h>
void main(){
    int a, b;
    scanf("%d %d",&a,&b);

    if(a == b){
        printf("0");
    }
    else if(a == 0 && b == 2){
        printf("1");
    }
    else if(a == 2 && b == 5){
        printf("1");
    }
    else if(a == 5 && b == 0){
        printf("1");
    }
    else{
        printf("2");
    }
}