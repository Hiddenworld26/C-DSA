#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number of rows and columns : ";
    cin>>n;
    int a ;
    for(int  i =1;i<=n;i++)
    {
        a = i;
        for(int j =1;j<=i;j++)
        {
            cout<<a<<" ";
            a-=1;
        }
        cout<<endl;
    }
}