q5] Write a program and get input from the user and create n number of sum

Ans]
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,i,sum=0;
    clrscr();
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        }
        printf("The sum of the first %d natural numbers is %d",n,sum);
}