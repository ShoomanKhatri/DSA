#include<stdio.h>
 int power(int x,int y)
{
    if(y==0)
      return 1;
    else
    return x*power(x,y-1);
}
int main()
{
    int x,y,p;
    printf("\n Insert two numbers:");
    scanf("%d%d",&x,&y);
    p=power(x,y);
    printf("%d Power %d is:%d ",x,y,p);
    return 0;
}