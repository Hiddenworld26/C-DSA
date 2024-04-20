#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter number upto you want to display your GP : ";
    cin>>n;

    cout<<"Displaying GP : ";


    //1st Method : ar = ar^(n-1)
    // for(int i =3;i<=(3*(pow(3,(n+1)))) ; i = i * 4)
    // {
    //     cout<<i<<" ";
    // }
    

    //2nd Method : using an extra variable 
    int a =3;

    for(int i = 1 ; i <= n ; i++ )
    {
      cout<<a<<" ";
      a = a * 4;
    }
}