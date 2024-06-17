#include<stdio.h>
void main(){
    int water, sugar;
    scanf("%d %d",&water,&sugar);

    int water_count = water / 500;
    int sugar_count = sugar / 20;

    int final_count;
    if(water_count < sugar_count){
        final_count = water_count;
    }
    else{
        final_count = sugar_count;
    }

    printf("%d",final_count);
    if((final_count * 500) < water){
        printf(" water");
    }
}