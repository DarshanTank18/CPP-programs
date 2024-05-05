//Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
int main(){
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    if(month == 1){
        printf("31 days");
    }
    else if(month == 2){
        printf("28 or 29 days");
    }
    else if(month == 3){
        printf("31 days");
    }
    else if(month == 4){
        printf("30 days");
    }
    else if(month == 5){
        printf("31 days");
    }
    else if(month == 6){
        printf("30 days");
    }
    else if(month == 7){
        printf("31 days");
    }
    else if(month == 8){
        printf("31 days");
    }
    else if(month == 9){
        printf("30 days");
    }
    else if(month == 10){
        printf("31 days");
    }
    else if(month == 11){
        printf("30 days");
    }
    else if(month == 12){
        printf("31 days");
    }
    else
    {
        printf("Invalid Month number.\nPlease try again ....\n");
    }

    return 0;
}
