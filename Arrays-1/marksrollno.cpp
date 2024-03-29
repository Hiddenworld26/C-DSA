#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks of student :\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<35)
        {
            cout<<i<<endl;
        }
    }
}