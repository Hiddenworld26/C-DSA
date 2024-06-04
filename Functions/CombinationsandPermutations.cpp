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

int perm(int n , int r)
{
   return fact(n)/fact(n-r);
   
}


int comb(int n , int r)
{
    return fact(n)/(fact(r)*fact(n-r));
    
}
int main()
{
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;

    int r ;
    cout<<"Enter the value of r : ";
    cin>>r;

    int p = perm(n,r);

    int c = comb(n,r);

    cout<<"Permutation is : "<<p<<endl;
    cout<<"Combination is : "<<c;

    



}