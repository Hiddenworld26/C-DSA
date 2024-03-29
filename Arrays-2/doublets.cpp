#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of array :\n";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array :\n";
    for(int i=0;i<x;i++)
    {
      cin>>arr[i];
    }
    int sum;
    cout<<"Enter sum :\n";
    cin>>sum;
    cout<<"Doublets are :"<<endl;
    for(int i=0;i<(x-1);i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}