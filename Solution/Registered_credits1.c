#include<stdio.h>
void main(){
    int lecture, lab;
    scanf("%d %d",&lecture,&lab);
    int price = 1000 + (lecture * 200) + (lab * 300);
    printf("%d",price);
}