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
    int count =0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
          if((arr[i]==arr[j]))
          {
            count++;
          }

        }
      
    }
    if(count ==0)
    {
        cout<<"unique element is found \n";
    }
   
}