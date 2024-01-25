#include<stdio.h>
int fib(int n)
{
    if(n<=2)
     return 1;
     else
     return fib(n-1) +fib(n-2);
}
int main()
{
    int n,f;
    printf("Enter your fibonacci Range:");
    scanf("%d",&n);
    f=fib(n);
    printf("%d",f);
    return 0;
    }