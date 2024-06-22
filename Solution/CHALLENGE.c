#include<stdio.h>
void main(){
    int date;
    char np, dmy;

    scanf("%d %c %c", &date, &np, &dmy);

    int year = date % 10000;
    int month = (date / 10000) % 100;
    int day = date / 1000000;

    // printf("%d\n%d\n%d",year,month,day);
    
    if(dmy == 'y'){
        if(np == 'n'){
            if(month == 2 && day == 29){
                day --;
            }
            year ++;
        }
        else{
            if(month == 2 && day == 29){
                day --;
            }
            year --;
        }
    }
    else if(dmy == 'm'){
        if(np == 'n'){
            if(month == 12){
                month = 1;
                year ++;
            }
            else{ // 1 3 5 78 10 12
                if((month == 3 || month == 5 || month == 8 || month == 10) && day == 31){
                    day = 30;
                }
                else if(month == 1 && day >= 29){
                    if(year % 400 == 0){
                        day = 29;
                    }
                    else if(year % 100 == 0){
                        day = 28;
                    }
                    else if(year % 4 == 0){
                        day = 29;
                    }
                    else{
                        day = 28;
                    }
                }
                month ++;
            }
        }
        else{
            if(month == 1){
                month = 12;
                year --;
            }
            else{// 1 3 5 78 10 12
                if((month == 5 || month == 7 || month == 10 || month == 12) && day == 31){
                    day = 30;
                }
                else if(month == 3 && day >= 29){
                    if(year % 400 == 0){
                        day = 29;
                    }
                    else if(year % 100 == 0){
                        day = 28;
                    }
                    else if(year % 4 == 0){
                        day = 29;
                    }
                    else{
                        day = 28;
                    }
                }
                month --;
            }
        }
    }
    else if(dmy == 'd'){
        if(np == 'n'){ // 1 3 5 78 10 12
            if(day == 31 && (month == 1 || month == 3 || month == 5 || month == 7|| month == 8 || month == 10)){
                day = 1;
                month++;
            }
            else if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
                day = 1;
                month++;
            }
            else if(day == 31 && month == 12){
                day = 1;
                month = 1;
                year ++;
            }
            else if(month == 2){
                if(day == 29){
                    day = 1;
                    month ++;
                }
                else if(day == 28){
                    if(year % 400 == 0){
                        day ++;
                    }
                    else if(year % 100 == 0){
                        day = 1;
                        month ++;
                    }
                    else if(year % 4 == 0){
                        day ++;
                    }
                    else{
                        day = 1;
                        month++;
                    }
                }
                else{
                    day++;
                }
            }
            else{
                day++;
            }
        }
        else{
            if(day == 1){
                if(month == 1){
                    day = 31;
                    month = 12;
                    year --;
                }
                else if(month == 3){
                    if(year % 400 == 0){
                        day = 29;
                    }
                    else if(year % 100 == 0){
                        day = 28;
                    }
                    else if(year % 4 == 0){
                        day = 29;
                    }
                    else{
                        day = 28;
                    }
                    month -- ;
                }
                else if(month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11 ){ // 2 4 6 8 9 11
                    day = 31;
                    month --;
                }
                else{ // 5 7 10 12
                    day = 30;
                    month --;
                }
            }
            else{
                day--;
            }
        }
    }


    // output part
    printf("%d ",day);

    if(month == 1){
        printf("January");
    }
    else if(month == 2){
        printf("Fabruary");
    }
    else if(month == 3){
        printf("March");
    }
    else if(month == 4){
        printf("April");
    }
    else if(month == 5){
        printf("May");
    }
    else if(month == 6){
        printf("June");
    }
    else if(month == 7){
        printf("July");
    }
    else if(month == 8){
        printf("August");
    }
    else if(month == 9){
        printf("September");
    }
    else if(month == 10){
        printf("October");
    }
    else if(month == 11){
        printf("November");
    }
    else if(month == 12){
        printf("December");
    }

    printf(" %d" , year);
}