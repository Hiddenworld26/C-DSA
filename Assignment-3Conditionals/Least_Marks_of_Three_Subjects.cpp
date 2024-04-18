#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cout<<"Enter marks of A : ";
    cin>>A;

    cout<<"Enter marks of B : ";
    cin>>B;

    cout<<"Enter marks of C : ";
    cin>>C;

    if(A<B)
    {
        if(A<C)
        {
            cout<<"Least marks is of A "<<A;
        }
        else
        {
            cout<<"Least marks is of C "<<C;
        }
    }
    else
    {
        if(B<C)
        {
            cout<<"Least marks is of B "<<B;
        }
        else
        {
            cout<<"Least marks is of C "<<C;
        }
    }
}