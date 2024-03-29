#include<iostream>
using namespace std;
int  main ()
{
    float x;
    cout<<"Enter  the value of x : \n";
    cin>>x;
    int y = int(x);
    cout<<"Integer part of number is : "<<y<<endl;
    cout<<"Fractional part of number is : "<<(x-y);
}

