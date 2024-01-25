#include<stdio.h>
void ExchangeSort(int A[], int N)
{
    int i,j,temp;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}

int main()
{
    int A[]={6,5,4,3,2,1,7};
    int i;
    ExchangeSort(A,7);
    printf("\n After exchangesort=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}
