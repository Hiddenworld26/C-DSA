#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int num=3;
    int count=0;
    for(int i=0;i<5;i++)
    {
          if(arr[i]>num)
          {
            count++;
          }
    }
    cout<<count;
   
}