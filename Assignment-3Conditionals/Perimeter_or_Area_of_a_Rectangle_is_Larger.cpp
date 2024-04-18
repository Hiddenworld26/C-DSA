#include<iostream>
using namespace std;

int main()
{
    int l,b;
    cout<<"Enter the length of rectangle : ";
    cin>>l;

    cout<<"Enter the breadth of rectangle : ";
    cin>>b;

    int p = 2*(l+b);

    int a = l*b;

    if(a > p)
    {
        cout<<"Area of rectangle is larger than Perimeter!";
    }
    else
    {
        cout<<"Perimeter of rectangle is larger  than Area!";
    }
}