// Tower of Hanoi.
#include<stdio.h>
void TOH(int n,char from,char to,char aux) {
   if(n>0) {
      TOH(n-1,from,aux,to);
      printf("\n Move disk %d from %c to %c",n,from,to);
      TOH(n-1,aux,to,from);
   }
}
int main() {
   int n=3;
   TOH(n,'A','B','C');
   return 0;
} 