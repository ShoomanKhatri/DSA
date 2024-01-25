#include<stdio.h>
int fact(int n){
    if( n==0)
    return 1;
    else return n*fact(n-1);
}
int main()
{
    int n,f;
    printf("\n Insert a number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("\n Factorial of %d is %d",n,f);
    return 0;
}