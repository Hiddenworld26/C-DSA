#include<iostream>
using namespace std;
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
    cout<<"Enter the elements of 0's and 1's in array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int zeroes=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==0)
        {
            zeroes++;
        }
    }
    


cout<<"Zeroes are : "<<zeroes<<endl;


    for(int i=0;i<zeroes;i++)
    {
       arr[i]=0;
    }
    for(int i=zeroes;i<x;i++)
    {
        arr[i]=1;
    }
    
cout<<"Printing the array of 0's and 1's in sorted order : "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    


}