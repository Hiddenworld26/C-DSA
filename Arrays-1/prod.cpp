#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the size of array : \n";
    cin>>m;
    int arr[m];
    cout<<"Enter the elements of array :\n";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"Print the elements of array :\n";
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int prod=1;

    //product of the elements 
    for(int i=0;i<m;i++)
    {
       prod*=arr[i];
    }

    cout<<"Product of the elements :\n"<<prod;

}