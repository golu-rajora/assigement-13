//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int x,int y);
int i=2;
int main()
{
    int x,y,z;
    printf(" calculate HCF of two numbers:-");
    printf("\n enter two number:-");
    scanf("%d %d",&x,&y);
    z=hcf(x,y);
    printf("%d and %d HCF is=%d",x,y,z);
    getch();
    return 0;
}
int hcf(int x,int y)
{
    if(i%x==0&&i%y==0)
        return x*y/i;
        i++;
      hcf(x,y);
}

