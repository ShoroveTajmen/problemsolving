#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
 float radius,area;
 printf("Enter radius of the circle :");
 scanf("%f",&radius);
 area=PI*radius*radius;
 printf("the area of the circle is %.2f",area);

}