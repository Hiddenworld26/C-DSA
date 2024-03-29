#include<iostream>
using  namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x;
    cout<<"Enter the size of array : "<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of 0's,1's and 2's in array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    int low=0;
    int mid=0;
    int high=x-1;

    while(mid<=high)
    {
        if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }

       else if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }

      else  if(arr[mid]==1)
        {
            mid++;
        }
    }

    cout<<"Print the element of array "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}