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
    
    bool flag=false;
    //array sorted or not
    for(int i=1;i<(x-1);i++)
    {
       if(!((arr[i-1]<=arr[i]) && (arr[i]<=arr[i+1])))
       { 
        flag=true;
        break;
       }
    }
    if(flag==true)
    {
        cout<<"Array is not sorted "<<endl;
    }
    else
    {
       cout<<"Array is sorted "<<endl;         
    }

}