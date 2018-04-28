//Copied from geeks for geeks and edited by susmoy.

#include<bits/stdc++.h>
using namespace std;

int arr[100];

void merge(int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1+ j];
    }
 
    int i = 0; 
    int j = 0; 
    int k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(l, m);
        mergeSort(m+1, r);
 
        merge(l, m, r);
    }
}

void print(int size)
{
    for (int i=0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

void input(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int n;
    cin>>n;
    input(n);

    cout<<"\nGiven array is: "<<endl;
    print(n);
 
    mergeSort(0, n-1);
 
    cout<<"\nSorted array is: "<<endl;
    print(n);
    return 0;
}