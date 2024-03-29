#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of array : "<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int count =0;
    int target;
    cout<<"Element to be compared from :"<<endl;
    cin>>target;
    for(int i=0;i<x;i++)
    {
        if(arr[i]>target)
        {
            count++;
        }
    }
    cout<<"Number of elements greater than "<<target<<" are : "<<count<<endl;
}