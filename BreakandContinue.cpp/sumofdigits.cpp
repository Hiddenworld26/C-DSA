#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"Enter number \n";
    cin>>n;
    while(n>0)
    {
        int r=n%10;
        sum+=r;
        n/=10;
    }
    cout<<sum<<endl;
}