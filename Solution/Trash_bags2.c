#include<stdio.h>
void main(){
    int plastic, glass, paper;
    scanf("%d %d %d",&plastic,&glass,&paper);
    int total_price = (plastic * 5) + ((glass * 5) * 20) + ((paper * 2) * 7);
    printf("%d",total_price);
}