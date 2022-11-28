//Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,x;
    printf("ENTER THE NUMBERS\n");
    scanf("%d",&x);
    for(i=1;i<=x;i+=2)
    printf("%d \n",i);
}