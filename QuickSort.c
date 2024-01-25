#include<stdio.h>
int partition(int A[], int L, int R)
{
    int Left=L;
    int Right=R;
    int pivot=A[L],temp;
    while(Left<=Right)
    {
        while(A[Left]<=pivot)
        {
            Left++;
        }
        while(A[Right]>=pivot)
        {
            Right--;
        }
        if(Left<Right)
        {
            temp=A[Left];
            A[Left]=A[Right];
            A[Right]=temp;
        }
    }
        A[L]=A[Right];
        A[Right]=pivot;
        return Right;
}
void QuickSort(int A[], int L, int R)
{
        int p;
        if(L<R)
        {
            p=partition(A,L,R);
            QuickSort(A,L,p-1);
            QuickSort(A,p+1,R);
        }
}

int main()
{
    int A[]={70,30,40,41,35,50,88,55};
    int i;
    QuickSort(A,0,7);
    printf("\n After quick sorting=");
    for(i=0;i<8;i++)
    printf("\n %d",A[i]);
    
    return 0;
}
