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
    cout<<endl;

    //duplicate
    bool flag=false;
    for(int i=0;i<(m-1);i++)
    {
      for(int j=i+1;j<m;j++)
      {
        if(arr[i]==arr[j])
        {
            flag=true;
            break;
        }
      }
    }
    if(flag==true)
    {
        cout<<"Array contains duplicate element ! \n";
    }
    else
    {
        cout<<"Array does not contain duplicate element ! \n";
    }
}