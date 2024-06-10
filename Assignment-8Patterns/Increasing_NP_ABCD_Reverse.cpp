#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
       int a = i;
       int b  = 2;
       
       for(int j = 1 ; j<=(n-i) ; j++)
       {
        cout<<"  ";
       }

       for(int k = 1;k<=i;k++)
       {
        cout<<(char)(a+64)<<" ";
        a-=1;
       }

       for(int p = 1 ;p<=(i-1);p++)
       {
         cout<<(char)(b+64)<<" ";
         b+=1;

       }

       cout<<endl; 
    }
}