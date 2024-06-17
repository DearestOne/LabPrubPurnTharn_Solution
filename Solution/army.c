#include<stdio.h>
void main(){
    int all, per_row;

    scanf("%d %d",&all, &per_row);

    printf("%d %d",(all/per_row),(all%per_row));
}