#include<stdio.h>
void main(){
    float distance;
    int fuel;
    scanf("%f %d",&distance,&fuel);
    printf("%.2f",(distance / fuel));
    // double distance;
    // int fuel;
    // scanf("%lf %d",&distance,&fuel);
    // printf("%.2lf",(distance / fuel));
}