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
    int i=0;
    int j=x-1;
    while(i<j)
    {
      if(arr[i]<0) i++;
      if(arr[j]>0) j--;
      if(i>j) break;
      if((arr[i]>0)&&(arr[j]<0))
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }

    cout<<"Print the elements of array :"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }

}