#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the size of array : "<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of 0's and 1's in array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=x-1;
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }

        if(arr[j]==1)
        {
            j--;
        }
        if(i>j)  break;
        if((arr[i]==1)&&(arr[j]==0))
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    cout<<"Printing the array of 0's and 1's in sorted order : "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}