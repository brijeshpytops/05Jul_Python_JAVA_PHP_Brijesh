task-1] calculate area of circle using C programing

Ans] 
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float r,area;
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle is %f",area);
}