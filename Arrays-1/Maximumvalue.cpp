#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={25,45,78,65,89};
    int max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"Maximum element of array are : "<<max;


}