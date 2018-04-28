#include<bits/stdc++.h>
using namespace std;

int arr[100],n;

void input()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int MIN(int a)
{
    int loc = a,min = arr[a];
    for(int i=a+1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            loc = i;
        }
    }
    return loc;
}
void selection()
{
    input();
    for(int i=0;i<n;i++)
    {
        int loc = MIN(i);
        int temp = arr[loc];
        arr[loc] = arr[i];
        arr[i] = temp;
    }
}
void print()
{
    cout<<"\nPrinting the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    selection();
    print();

    return 0;
}