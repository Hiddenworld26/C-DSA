#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of array :\n";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array  :\n";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to be searched for :\n";
    cin>>target;
    int index=0;
    bool flag = false;
    //forward Loop
    // for(int i=0;i<x;i++)
    // {
    //     if(arr[i]==target)
    //     {
    //         index=i;
    //         flag=true;
    //     }

    // }
    //backward loop
    for(int i=(x-1);i>=0;i--)
    {
        if(arr[i]==target)
        {
            index=i;
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"Element is not found !"<<endl;
    }
    else
    {
        cout<<"The element occurs at  index : "<<index;
    }
}