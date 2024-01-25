#include<stdio.h>
void merge(int A[], int L, int R)
{
    int i;
    int left=L;
    int right=R;
    int top=L;
    int temp[100];
    int mid=(L+R)/2;
    int end=mid-1;
    while(left<=end && mid<=right)
    {
        if(A[left]<A[mid])
        {
            temp[top]=A[left];
            left++;
        }
        else
        {
            temp[top]=A[mid];
            mid++;
        }
        top++;
    }
    while(left<=end)
    {
        temp[top]=A[left];
        left++;
        top++;
    }
    while(mid<=right)
    {
        temp[top]=A[mid];
        mid++;
        top++;
    }
    for(i=L;i<=R;i++)
    A[i]=temp[i];   
}
void MergeSort(int A[], int L, int R)
{
    int mid;
    if(L<R)
    {
        mid=(L+R)/2;
        MergeSort(A,L,mid);
        MergeSort(A,mid+1,R);
        merge(A,L,R);
    }
}


int main()
{
    int A[]={20,3,5,80,9,40,38};
    int i;
    MergeSort(A,0,7);
    printf("\n After merge sorting=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}