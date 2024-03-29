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
    int sume=0,sumo=0;
    for(int i=0;i<x;i++)
    {
        if(i%2==0)
        {
            sume+=arr[i];
        }
        else
        {
            sumo+=arr[i];
        }
    }
    cout<<"Difference between the sum of elements at even indices to the sum of elements at odd indices : "<<abs(sume-sumo)<<endl;

}