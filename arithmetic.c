#include <stdio.h>
int main(void) {
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    printf("The result of a+b is %d\n", a+b);
    printf("The result of a-b is %d\n", a-b);
    printf("The result of a*b is %d\n", a*b);
    printf("The result of a/b is %d\n", a/b);
    printf("The result of a%b is %d\n", a%b);
    return 0;
}