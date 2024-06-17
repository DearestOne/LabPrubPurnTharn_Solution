#include<stdio.h>
void main(){
    int c;
    scanf("%c", &c);

    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        printf("Alphabetic");
    }
    else if(c >= 48 && c <= 57){
        printf("Number");
    }
    else{
        printf("Special");
    }
}