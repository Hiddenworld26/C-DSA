#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of array : "<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of 0's,1's and 2's in array : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    //count the no of 0,1 and 2
    int zeroes =0,ones=0,twos=0;

    for(int i=0;i<x;i++)
    {
        if(arr[i]==0) zeroes++;
       else if(arr[i]==1) ones++;
       else twos++;

    }

    for(int i=0;i<x;i++)
    {
        if(i<zeroes) arr[i] = 0;
      
        else if((i>=zeroes)&&(i<(zeroes+ones))) arr[i] = 1;
        else arr[i] = 2;
    }

    cout<<"Print the element of array "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}