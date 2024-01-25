#include<stdio.h>
int SUM(int n){
    if(n==0)
      return 0;
    else
      return ((n%10)+SUM(n/10));
}
int main(){
    int sumofdigit, n=123;
    sumofdigit=SUM(n);
    printf("The sum of digit is %d",sumofdigit);
    return 0;
}