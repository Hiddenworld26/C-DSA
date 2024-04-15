#include<iostream>
using namespace std;
int main()
{
    float pi=3.14;
    float r;
    cout<<"Enter value of radius : \n";
    cin>>r;
    float h;
    cout<<"Enter value of height : \n";
    cin>>h;
    float volume;
    volume = pi*r*r*h;
    cout<<"Volume of a cylinder is : "<<volume;
}