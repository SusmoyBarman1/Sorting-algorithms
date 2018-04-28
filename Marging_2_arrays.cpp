#include<bits/stdc++.h>
using namespace std;

int A[100],B[100],C[200],r,s,n;

void input()
{
    cout<<"Give the value of array 1: ";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        cin>>A[i];
    }
    cout<<"Give the value of array 2: ";
    cin>>s;
    n = r + s;
    for(int i=0;i<s;i++)
    {
        cin>>B[i];
    }
}
void print1(int a)
{
    cout<<"\nPrinting the values of the array: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}
void marging()
{
    input();
    int na=0,nb=0,ptr=0;
    while(na<r && nb<s)
    {
        if(A[na]<B[nb])
        {
            C[ptr] = A[na];
            na++;ptr++;
        }
        else
        {
            C[ptr] = B[nb];
            nb++;ptr++;
        }
        //print1(ptr);
        
    }
    if(na>=r)
    {
        for(int k=0;k<=s-nb;k++)
        {
            C[ptr+k] = B[nb+k];
            //r++;
        }
    }
    else
    {
        for(int k=0;k<=r-na;k++)
        {
            C[ptr+k] = A[na+k];
            //r++; 
        }
    }
}
void print()
{
    cout<<"\nPrinting the values of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}
 int main()
{
    marging();
    print();
    
    return 0;
}