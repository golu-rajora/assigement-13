//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int s=1,n;
int main()
{
    int x,y;
    printf(" to calculate the power of any number :-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    printf("enter a power:-");
    scanf("%d",&y);
    int z;
    z=power(x,y);
    printf("%d number power of %d is=%d",x,y,z);
    getch();
    return 0;
}
  int power(int x,int y)
  {
      if(y==0)
        return s;
      int i=1;
      n=x*i;
      s=s*n;
      power(x,y-1);
  }
