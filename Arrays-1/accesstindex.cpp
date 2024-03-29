#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Accessing elements of array : "<<endl;
    cout<<arr[4];
}
