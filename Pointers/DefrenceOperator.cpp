#include<iostream>

using namespace std;

int main()
{
    int x = 4;

    //* - this is defrence operator

    // int *ptr = &x;
    // cout<<*ptr;


    int y = 122;

    int *p = &y;

    cout<<y<<endl;

    *p = 6;

    cout<<y<<endl;



}