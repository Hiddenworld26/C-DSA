#include<iostream>
using namespace std;
void linearsearch(int arr[],int x,int a)
{
    int flag=false;
    int i,index;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==a)
        { 
            index=i;
            flag=true;
            break;
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
  linearsearch(arr,x,y);
}