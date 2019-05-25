#include<stdio.h>
void main()
{
    long int n, sum, range;
    printf("\n how many numbers do you want to calculate: ");
    scanf("%ld", &range);

    sum = 0;
    for(n = 1; n <= range; n++)
        sum += n;
    printf("\n sum of all numbers form 1 to %ld is %ld." , range, sum);
}