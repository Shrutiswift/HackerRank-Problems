#include <stdio.h>
int main()

{
    int i,j, lastDigit, m, n, cur;
    long fact, sum;
    printf("Enter lower and upper limit: ");
    scanf("%d%d", &m, &n);
    printf("Armstrong numbers between %d and %d are: \n", m, n);
    for(i = m; i <= n; i++)
    {
        fact = 1;
        lastDigit = cur % 10;
        for(j = 1; j <= 3; j++)
        {
            fact = fact*lastDigit;

        }
        sum += fact;
        cur /= 10;

    }
    if(sum == i)
    {
        printf("%d", i);
    }
    return 0;
}