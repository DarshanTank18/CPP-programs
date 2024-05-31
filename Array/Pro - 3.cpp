// WAP to find reverse of string using recursion
#include <stdio.h>
void info();
int main() {
    printf("Enter value : ");
    info();
}

void info() {
    char c;
    scanf("%c",&c);
    if (c != '\n') {
        info();
        printf("%c",c);
    }
}

