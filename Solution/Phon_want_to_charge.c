#include<stdio.h>
#include<math.h>
void main(){
    int ac,bc;
    scanf("%d %d",&ac,&bc);
    int ab = sqrt((bc * bc) - (ac * ac));
    if(ac > ab){
        printf("B");
    }
    else if(ac < ab){
        printf("C");
    }
    else{
        printf("B or C");
    }
}