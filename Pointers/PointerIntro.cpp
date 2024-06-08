#include<iostream>

using namespace std;

int main()
{
    int x = 4;

    int *ptr=&x;

    cout<<x<<endl;
    cout<<&x<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<&ptr<<endl;

    float y = 1.1;

    //int* p = &y; - This is  wrong

    float *p = &y;
    cout<<p;



}