#include<iostream>

using namespace std;

int main()

{
    int x = 4;
    int *ptr = &x;

    int **ptr2 = &ptr;

    // cout<<ptr2<<endl;
    // cout<<&ptr<<endl;

    // cout<<x<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;


    // cout<<*ptr2<<endl;

    int ***ptr3 = &ptr2;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    cout<<***ptr3<<endl;

    cout<<ptr3<<endl;
    cout<<&ptr2<<endl;


}