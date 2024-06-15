#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int a,b;
    scanf("%d %d",&a,&b);

    if(x <= 0 || y <= 0 || a <= 0 || b <= 0 || x > 8 || y > 8 || a > 8 || b > 8){
        printf("out of board.");
    }
    else{
        if(x == a || y == b){
            printf("Now Rook current position is %d %d",a,b);
        }
        else{
            printf("Sorry, you can't move to that position. Now Rook current position is %d %d",x,y);
        }
    }
}