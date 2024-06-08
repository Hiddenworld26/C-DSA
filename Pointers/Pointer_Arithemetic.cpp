#include<iostream>
using namespace std;

int main()
{
    int x ;
    cout <<"Enter the value of x : ";
    cin>>x;

    int *ptr = &x;

    // cout<<x<<endl;
    cout<<(*ptr)<<endl;

    // cout<<ptr<<"\n";

    ptr=ptr+1;

    cout<<(*ptr); // garbage value : Pointer has moved 4 byte ahead 

    // int y = (*ptr)++;

    // cout<<x<<endl;
    // cout<<y<<endl;
}