// Pro - 2
#include<stdio.h>

main() {
    FILE *fl;
    fl = fopen("Pro - 2.txt", "w");
    
    char fnm[20],lnm[20],city[20];
    int i,n;
    
    printf("Enter total student(s): ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter first name: ");
        scanf("%s",&fnm);
        printf("Enter last name: ");
        scanf("%s",&lnm);
        printf("Enter your city: ");
        scanf("%s",&city);
        
        printf("---------------------\n");
        printf("First name: %s\n",fnm);
        printf("Last name: %s\n",lnm);
        printf("City: %s\n",city);
        printf("---------------------\n");
        
        fprintf(fl,"First name: %s\n",fnm);
        fprintf(fl,"Last name: %s\n",lnm);
        fprintf(fl,"City: %s\n",city);
        fprintf(fl,"---------------------\n");
    }
    fclose(fl);
}

