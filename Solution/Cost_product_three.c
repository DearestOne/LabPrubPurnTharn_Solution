#include<stdio.h>
void main(){
    int x,y,avg;
    scanf("%d %d %d",&x,&y,&avg);
    // (x + y + z) / 3 = avg
    // x + y + z = avg * 3
    // z = (avg * 3) - x - y
    int z = (avg * 3) - x - y;
    printf("%d",z);
}