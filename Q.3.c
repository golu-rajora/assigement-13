//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int s=0;
int even_sum(int n);
int main()
{
    int n,x;
    printf("calculate sum of first N even natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d even natural number sum is=",n);
    x=even_sum(n);
    printf("%d",x);
    getch();
    return 0;
}
int even_sum(int n)
{
    if(n==0)
        return s;
        s=s+n*2;
         even_sum(n-1);

}
