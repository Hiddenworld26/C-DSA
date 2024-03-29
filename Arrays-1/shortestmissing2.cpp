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
    int x=1;
    bool flag=false;
    for(int i=0;i<m;i++)
    {
        if(arr[i]!=x)
        {
            flag=true;
            break;
        }
        x++;
    }
    cout<<"The smallest missing positive element : "<<x;
}