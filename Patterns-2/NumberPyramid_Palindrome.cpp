#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
       int a = 1;
       int b = i-1;
       for(int j = 1 ; j<=(n-i) ; j++)
       {
        cout<<"  ";
       }

       for(int k = 1;k<=i;k++)
       {
        cout<<a<<" ";
        a+=1;
       }

       for(int p = 1 ;p<=(i-1);p++)
       {
        cout<<b<<" ";
        b-=1;

       }

       cout<<endl; 
    }
}