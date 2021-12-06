#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("The Sum of a and b = %d \n", a + b);
    printf("The Subtraction of a and b = %d \n", a - b);
    printf("The Multiplication of a and b = %d \n", a * b);
    printf("The Quotient of a and b = %d \n", a / b);
    printf("The Modulus of a and b = %d \n", a % b);
    return 0;
}