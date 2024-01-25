#include<stdio.h>
void ShellSort(int A[], int N)
{
    int i,j,temp,gap;
    for(gap=N/2;gap>0;gap=gap/2)
    {
        for(i=gap;i<N;i++)
        {
            temp=A[i];
            for(j=i;j>=gap && temp<A[j-gap];j=j-gap)
            {
                A[j]=A[j-gap];
            }
            A[j]=temp;
        }
    }
}

int main()
{
    int A[]={20,3,5,80,9,40,38};
    int i;
    ShellSort(A,7);
    printf("\n After shell sorting=");
    for(i=0;i<7;i++)
    printf("\n %d",A[i]);
    
    return 0;
}