//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int s=0;
int sum(int n);
int main()
{
    int n,x;
    printf("calculate sum of first N natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d natural number sum is=",n);
    x=sum(n);
    printf("%d",x);
    getch();
    return 0;
}
int sum(int n)
{
    if(n==0)
        return s;
        s=s+n;
         sum(n-1);

}

