#include<stdio.h>
void InsertionSort(int A[], int N)
{
    int i,j,temp;
    for(i=1;i<N;i++)
    {
        temp=A[i];
        j=i-1;
        while(A[j]>temp && j>=0)
        {
         A[j+1]=A[j];
         j--;
        }
        A[j+1]=temp;
    }
}

int main()
{
    int A[]={20,3,5,80,9,40,38};
    int i;
    InsertionSort(A,7);
    printf("\n After insertion sorting=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}
