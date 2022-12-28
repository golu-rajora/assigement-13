//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
void fibonacci(int x);
int a=-1,b=1,s;
int main()
{
    int x;
    printf("print first N terms of Fibonacci series:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    fibonacci(x);
    getch();
    return 0;
}
void fibonacci(int x)
{
    if(x==0)
        return;
    s=a+b;
    a=b;
    b=s;
     printf(" %d",s);
    fibonacci(x-1);

}
