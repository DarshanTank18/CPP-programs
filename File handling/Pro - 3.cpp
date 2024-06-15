//Pro - 3
#include <stdio.h>

main(){
    FILE *fl;
    fl = fopen("Pro - 3.txt", "a");
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n % 2 == 0) {
        printf("Even value\n");
        fprintf(fl,"Value is: %d\n", n);
        fprintf(fl,"Even value\n");
    }else{
        printf("Odd value\n");
        fprintf(fl,"Value is: %d\n", n);
        fprintf(fl,"Odd value\n");
    }
    fclose(fl);
}

