#include<stdio.h>
void selectionsort(int A[], int N)
{
    int i,j,temp,minIndex;
    for(i=0;i<N-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<N;j++)
        {
            if(A[j]<A[minIndex])
              minIndex=j;
        }
        if(i!=minIndex)
        {
            temp=A[i];
            A[i]=A[minIndex];
            A[minIndex]=temp;

        }
    }
}


int main()
{
    int A[]={20,3,5,80,9,40,38};
    int i;
    selectionsort(A,7);
    printf("\n After selection sorting=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}
