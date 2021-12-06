
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    FILE *ifp;

    //Reading the data
    ifp = fopen("data.txt","r");
    if (ifp == NULL) {
        fprintf(stderr, "Can't open input file in.list!\n");
        exit(1);
    }
    int i=0;
    //Initialize the variables
    int weight, weights[10000], total;
    while (fscanf(ifp, "%d\t", &weights[i]) != EOF){
        printf("%d\n",weights[i]);
        i++;
    }
    fclose(ifp);

    total = 0;
    for(int j = 0; j < i; j++) {
        total = total + weights[j];
    }
    double avg = total/i;
    printf(" the average is: %f", avg);

    return 0;
}