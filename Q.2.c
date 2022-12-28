//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int s=0;
int odd_sum(int n);
int main()
{
    int n,x;
    printf("calculate sum of first N odd natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d odd natural number sum is=",n);
    x=odd_sum(n);
    printf("%d",x);
    getch();
    return 0;
}
int odd_sum(int n)
{
    if(n==0)
        return s;
        s=s+n*2-1;
         odd_sum(n-1);

}

