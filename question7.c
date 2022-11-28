// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,x;
    printf("ENTER THE VALUE\n");
    scanf("%d",&x);
    for(i=x;i>=1;i-=2)
    printf("%d\n",i);
}