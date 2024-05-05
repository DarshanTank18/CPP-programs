// Write a C program to input basic salary of an employee and calculateits Gross salary according to following:

#include<stdio.h>
main() {

    float basic_salary, gross_salary, hra, da;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    if(basic_salary <= 10000){
        hra = basic_salary * 0.2;
        da = basic_salary * 0.8;
    }else if(basic_salary <= 20000){
        hra = basic_salary * 0.25;
        da = basic_salary * 0.9;
    }else{
        hra = basic_salary * 0.3;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;
    
    printf("Gross salary: %.2f", gross_salary);
}
