#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter the size of array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the sum of elements of array : "<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
    }
    cout<<sum;
}
