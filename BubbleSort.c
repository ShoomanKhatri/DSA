#include<stdio.h>
void bubblesort(int A[], int N)
{
    int i,j,temp;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[7];
    int i;
    for(i=0;i<7;i++)
    {
        printf("\n Insert numbers=");
        scanf("%d",&A[i]);
    }
    bubblesort(A,7);
    printf("\n After buuble sorting=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}
