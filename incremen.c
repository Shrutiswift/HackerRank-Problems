#include <stdio.h>
int main(void) {
    int a,b, c;
    printf("Enter the value of a, b and c:\n"); //Input the value of a and b
    scanf("%d %d %d", &a, &b, &c);
    printf("The result of a || b is %d\n", (a > b) || (a < c));
    printf("The result of a && b is %d\n", (a > b) && (c > a));
    printf("The result of a*b is %d\n", a*b);
    printf("The result of a/b is %d\n", a/b);
    printf("The result of a%b is %d\n", a%b);
}
