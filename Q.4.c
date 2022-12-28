//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int s=0;
int square_sum(int n);
int main()
{
    int n,x;
    printf("calculate sum of squares of first N  natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d squares of first  natural number sum is=",n);
    x=square_sum(n);
    printf("%d",x);
    getch();
    return 0;
}
int square_sum(int n)
{
    if(n==0)
        return s;
        s=n*n+s;
         square_sum(n-1);

}
