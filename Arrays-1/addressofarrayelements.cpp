#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;

}