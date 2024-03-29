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
    //reverse

    for(int i=0, j=(x-1);i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"Print elements in reverse order : "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }

}