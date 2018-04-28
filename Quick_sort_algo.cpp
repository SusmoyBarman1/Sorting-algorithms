#include<bits/stdc++.h>
using namespace std;

int partition(int *A,int start,int end)
{
    int pivot = A[end];
    int partitionIndex = start;
    for(int i=start;i<end;i++)
    {
        if(A[i]<pivot)
        {
            swap(A[i],A[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(A[partitionIndex],A[end]);
    return partitionIndex;
}
void Quicksort(int *A,int start,int end)
{
    if(start<end)
    {
        int partitionIndex = partition(A,start,end);
        Quicksort(A,start,partitionIndex-1);
        Quicksort(A,partitionIndex+1,end);
    }
}
void print(int *A,int n)
{
    cout<<"\nPrinting the sorted list: "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int input(int *A)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    return n;
}
int main()
{
    int A[100],n;
    n = input(A);
    Quicksort(A,0,n-1);
    print(A,n);

    return 0;
}