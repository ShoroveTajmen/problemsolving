#include<stdio.h>
int main()
{
 int grad1,grad2,grad3,grad4,grad5;
 float average;
 printf("\n\nEnter five grade (use SPACE to separate the data):");
 scanf("%d %d %d %d %d",&grad1,&grad2,&grad3,&grad4,&grad5);
 average = (float)((grad1+grad2+grad3+grad4+grad5)/5.0);
 printf("\n\n\n\nAverage is : %f",average);
 return 0;
}