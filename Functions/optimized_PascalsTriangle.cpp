#include<iostream>

using namespace std;

void pascal(int n)
{
    for(int i = 0 ; i<=n ; i++)
    {
        int first = 1;
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<first<<" ";
            first = first * (i-j)/(j+1);
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