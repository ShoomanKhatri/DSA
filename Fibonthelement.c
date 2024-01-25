#include<stdio.h>
int fib(int n)
{
    if(n==0)
     return 0;
    else if(n==1)
      return 1;
    else  
      return fib(n-1) +fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter your fibonacci Range:");
    scanf("%d",&n);
    i=fib(n);
    printf("%d",i);

    return 0;
    }