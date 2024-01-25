#include<stdio.h>
void swap(int x, int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf("Values of a and b after swapping are : %d and %d",x,y);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}