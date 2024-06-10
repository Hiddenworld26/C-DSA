#include<iostream>
using namespace std;

float area(int r)
{
    float pi = 3.14;
    return pi*r*r;
}

int main()
{
    int radius;
    cout<<"Enter radius you want to find area for : ";
    cin>>radius;

    cout<<"Area of a circle is : "<<area(radius);
}