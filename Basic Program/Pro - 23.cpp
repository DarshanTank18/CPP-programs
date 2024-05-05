// WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()  
{  
    int a, b;  
  
    printf("Enter 2 integer numbers :");  
    scanf("%d %d", &a, &b);    
  
    a = a * b;  
    b = a / b;  
    a = a / b;  
  
    printf("Swapping %d and %d\n", a ,b);
}  
