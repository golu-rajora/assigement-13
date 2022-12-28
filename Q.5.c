//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int s=0;
int digit_sum(int n);
int main()
{
    int n,x;
    printf("calculate sum of digits of a given number:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d number sum  of digit is =",n);
    x=digit_sum(n);
    printf("%d",x);
    getch();
    return 0;
}
int digit_sum(int n)
{
    if(n==0)
        return s;
        s=n%10+s;
         digit_sum(n/10);

}
