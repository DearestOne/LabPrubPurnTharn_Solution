#include<stdio.h>
void main(){
    int x,y,avg;
    scanf("%d %d %d",&x,&y,&avg);
    int z = (avg * 3) - x - y;
    if(z < 0){
        printf("0");
    }
    else{
        printf("%d",z);
    }
}