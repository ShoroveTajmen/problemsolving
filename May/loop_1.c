#include<stdio.h>
void main()
{
    int count;
    printf("\n first loop\n\a");
    for(count = 1; count <= 15; count++)
        printf("%d\n", count);

    printf("\n second loop\n\a");
    for(count = 1; count <= 10; count++)
        printf("%d\n", count);

    printf("\n third loop\n\a");
    for(count = 100; count <= 5; count++)
        printf("%d\n", count);

}