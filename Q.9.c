//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int i=0;
int digit_count(int n);
int main()
{
    int n,x;
    printf("count the digits of a given number using recursion.:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d number count digit is = ",n);
    x=digit_count(n);
    printf("%d",x);
    getch();
    return 0;
}
int digit_count(int n)
{
    if(n==0)
        return i;
          i++;
         digit_count(n/10);

}
