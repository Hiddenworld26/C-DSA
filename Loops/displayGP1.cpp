#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;
    for(int i=1;i<=pow(2,n-1);i*=2)
    {
        cout<<i<<" ";
    }
}