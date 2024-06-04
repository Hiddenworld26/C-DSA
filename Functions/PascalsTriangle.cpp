#include<iostream>
#include<cmath>
using namespace std;

int fact(int x )
{
    int fact = 1;
    for(int i = 1 ;i<=x ; i++)
    {
        fact*=i;
    }
    return fact;
}



int comb(int n , int r)
{
    return fact(n)/(fact(r)*fact(n-r));
    
}

void pascal(int n)
{
    for(int i = 0 ; i<=n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;

    pascal(n);



    



}