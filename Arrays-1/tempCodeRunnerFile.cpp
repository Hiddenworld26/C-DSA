#include<iostream>
using namespace std;
void binarysearch(int arr[],int x,int a)
{ 
   int index;   
   int start=0;
   int end=x-1;
   int mid=(start+end)/2;
   int flag=false;
   while(start<end)
   {
     if(arr[mid]==a)
     {
        flag=true;
        index=mid;
        break;
     }
     else if(a<arr[mid])
     {
       end=mid-1;                   
     }
     else
     {
       start=mid+1;
     }
   }
    if(flag==true)
    cout<<"Element found at index "<<index<<endl;
    else
    cout<<"Element not found in array"<<endl;

}
int main()
{
    int x;
    cout<<"Enter the size of array : \n";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array : \n";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are : "<<endl;
    for(int i=0;i<x;i++)
    {
       cout<<arr[i]<<" "<<endl;
    }
    int y;
    cout<<"Element you want to search for : "<<endl;
    cin>>y;
    binarysearch(arr,x,y);
}