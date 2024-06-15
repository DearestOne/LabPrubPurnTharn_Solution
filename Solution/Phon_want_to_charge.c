#include<stdio.h>
#include<math.h>
void main(){
    double ac,bc;
    scanf("%lf %lf",&ac,&bc);
    
    double ab = sqrt((bc * bc) - (ac * ac));
    if(ab < ac){
        printf("B\n%.2lf",ab);
    }
    else{
        printf("C\n%.2lf",ac);
    }
}