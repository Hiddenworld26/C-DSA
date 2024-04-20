#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the value of n : \n";
    cin>>n;
    cout<<"Printing the table of "<<n<<" : "<<endl;

    for(int i = 1 ; i<=10;i++)
    {
        cout<<n<<"*"<<i<<" = "<<(n*i)<<endl;
    }
}