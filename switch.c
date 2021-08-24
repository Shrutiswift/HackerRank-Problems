#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);//2
    switch(a)
    {
        case 1:
            printf("Case 1");
            break;
        case 2:
            printf("Case 2");
            break;
        default:
            printf("Not in case");
    }
    
}
