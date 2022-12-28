//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int s=1;
int factorial(int n);
int main()
{
    int n,x;
    printf(" calculate factorial of a given number:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    printf(" %d number factorial is =",n);
    x=factorial(n);
    printf("%d",x);
    getch();
    return 0;
}
int factorial(int n)
{
    if(n==1)
        return s;
       s=s*n;
       factorial(n-1);

}

