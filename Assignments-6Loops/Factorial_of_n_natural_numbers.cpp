#include<iostream>

using namespace std;

int main()

{
    int n ;

    cout<<"Enter numbers : ";

    cin>>n;

    int fact = 1;

    int i = 1;

    while(i<=n)
    {
        fact *= i;

        cout<<"Factorial of "<<i<<" is "<<fact<<endl;

        i++;


    }
}