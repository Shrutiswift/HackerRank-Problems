#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    // Pointer arithmetic
    printf("%d\n",p);
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("%d\n",p+1);
    printf("Value at address p+1 is %d\n", *(p+1));
    
}