// WAP Find out length of string without using inbuilt function.
#include <stdio.h>
main(){
    char a[50];
	int i,length = 0;
	
    printf("Enter the string: ");
    scanf("%s",a);
    
    for(i=0; a[i] != '\0';i++)
    {
        length++;
    }
    printf("length of %s : %d\n",a,length);
}
