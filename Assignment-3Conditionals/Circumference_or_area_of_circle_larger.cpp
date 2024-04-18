#include<iostream>
using namespace std;

int main()
{
    float pi = 3.14;
    float r;

    cout<<"Enter the value of radius : ";
    cin>>r;

    float cf = 2*pi*r;

    float ar = pi*r*r;

    if(cf>ar)
    {
      cout<<"Circumference of area is larger!";
    }
    else
    {
        cout<<"Area of circle is larger!";
    }
}