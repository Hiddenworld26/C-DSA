#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter thee value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    for(int i = a ; i<=b ; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
}