#include <stdio.h>

int main()
{
    int i = 0, num;
    printf("Enter 0 to exit the operator \n");
    while(scanf("%d", & num) && num > 0)
    {
        ++i;
    }
    print("You entered a number %d times", i);
    
}
