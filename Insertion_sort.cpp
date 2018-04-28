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

void insertion()
{
    input();
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int ptr = i-1;
        while(temp<arr[ptr])
        {
            if(ptr==-1)
            {
                break;
            }
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1] = temp;
    }
}
void print()
{
    cout<<"\nPrinting the sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    insertion();
    print();

    return 0;
}