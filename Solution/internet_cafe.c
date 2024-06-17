#include<stdio.h>
void main(){
    int hour;
    scanf("%d",&hour);

    int A = 20 * hour;
    int B = 100 + (18 * hour);

    printf("%d %d\n",A,B);
    if(A <= B){
        printf("A");
    }
    else{
        printf("B");
    }
}