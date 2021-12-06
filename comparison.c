#include <stdio.h>
int main() {
    int km, m, feet, inch, cm;
    printf("Enter the distance between two cities:\n");
    scanf("%d", &km);
    m = km * 1000;
    feet = km * 3280.84;
    inch = km * 39370.1;
    cm = km * 100000;
    printf("Distance in kilometers = %d\n", km);
    printf("Distance in meters = %d\n", m);
    printf("Distance in feet = %d\n", feet);
    printf("Distance in inches = %d\n", inch);
    printf("Distance in centimeters = %d\n", cm);
    

    return 0;
}                                                               