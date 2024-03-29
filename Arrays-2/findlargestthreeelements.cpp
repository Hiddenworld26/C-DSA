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

    int max1,max2,max3;
    max1=max2=max3=arr[0];

    //find three largest elements from array

    for(int i=0;i<x;i++)
    {
        if(arr[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3)
        {
            max3=arr[i];
        }
    }

    cout<<"The largest three elements in array are : "<<max1<<","<<max2<<"and"<<max3<<endl;
}