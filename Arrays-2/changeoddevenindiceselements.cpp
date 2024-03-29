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
    
    for(int i=0;i<x;i++)
    {
        if(i%2==0)
        {
           arr[i]+=10;
        }
        else
        {
           arr[i]*=2;
        }
    }
    cout<<"Print the new elements of array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }

}