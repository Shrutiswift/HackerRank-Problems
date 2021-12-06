#include <stdio.h>

int main() {
    // main variable declaration
    int a,b,c;
    int great;

    scanf("%d%d%d", &a, &b, &c);
    printf("Enter 3 numbers:\n");
    
    great = (a>b&a>c?a:b>c? b:c);
    printf("The greatest number is", great);

    
}