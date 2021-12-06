#include<stdio.h>
int main()
{
    int i, sum = 0;
    printf("The number between 100-200 which are divisible by 5\n");
    for(i = 101; i < 200; i++)
    {
        if(i % 5 == 0)
        {
            printf("%5d", i);
            sum += i;
        }
    }
    printf("\n\n sum = %d", sum);
}