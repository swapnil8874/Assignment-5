//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,x;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    printf("%d \n",i);
}