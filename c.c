#include <stdio.h>
int main()
{
    int a;
    a = 10;
    int *pointer;
    int **pointerToPointer;
    pointer = &a; //&a = address of a
    pointerToPointer = &pointer;
    printf("value of a: %d\n", a);
    printf("value of pointer: %d\n", pointer);
    printf("value of pointerToPointer: %d\n\n", pointerToPointer);

    printf("Value at the address that is in pointer: %d\n", *pointer);
    printf("Value at the address that is in pointerToPointer: %d\n\n", *pointerToPointer);

    printf("Valye that is at the address that is at the address in pointerToPointer: %d\n", **pointerToPointer);

    // printf("%d\n", &a);
    // printf("%d\n", p);
    // printf("%d\n", &p);
    // printf("%d\n", q);
    // printf("%d\n", q);
    
}
