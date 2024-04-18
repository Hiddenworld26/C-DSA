#include<iostream>
using namespace std;

int main()
{
    int side1 , side2 , side3;

    cout<<"Enter the 1st side of Triangle : ";
    cin>>side1;

    cout<<"Enter the 2nd side of Triangle : ";
    cin>>side2;

    cout<<"Enter the 3rd side of Triangle : ";
    cin>>side3;

    if((side1==side2)&&(side2==side3)&&(side1==side3))
    {
        cout<<"Equilateral Triangle!";
    }

    else if((side1==side2)||(side2==side3)||(side1==side3))
    {
        cout<<"Isoceles Triangle!";
    }
    else
    {
        cout<<"Scalene Triangle!";
    }
}