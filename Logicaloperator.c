#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("Enter the value of a,b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The result of && is %d\n", (a>b)&&(a>c));
    printf("The result of || is %d\n", (a>b)||(a>c));
    printf("The result of !a %d", a);
}
