#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number of rows and columns : ";
    cin>>n;
    
    for(int  i =1;i<=n;i++)
    {
       for(int j=1;j<=(n-i);j++)
       {
         cout<<"  ";
       }
       for(int k=1;k<=n;k++)
       {
        cout<<"*"<<" ";
       }
       for(int p=2;p<=i;p++)
       {
             cout<<"  ";
       }
       cout<<endl;
    }
}