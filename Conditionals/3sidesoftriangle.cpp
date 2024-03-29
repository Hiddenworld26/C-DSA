#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter value of sides of triangle : \n";
    cin>>side1>>side2>>side3;
    if(((side1+side2)>side3)&&((side1+side3)>side2)&&((side3+side2)>side1))
    {
        cout<<"Sides of valid Traingle"<<endl;
    }
    else
    {
        cout<<"Sides of not  valid Traingle"<<endl;

    }
}