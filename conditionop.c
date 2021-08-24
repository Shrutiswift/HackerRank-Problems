#include <stdio.h>

int main() {
    // main variable declaration
    int a,x;

    // io
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("The input was: %d\n", a);

    // conditional operator usage
    x = (a % 2 == 0 ? 0 : 1);

    printf("The result of x is %d\n", x);

    return 0;
}