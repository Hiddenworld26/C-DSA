#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number upto you want to display your AP : ";
    cin>>n;

    //4 7 10 13 16 ......


    //1st Method : using an = a + (n-1)d
    cout<<"Displaying AP : "<<endl;

    // for(int i = 4;i<=(3*n+1);i=i+3)
    // {
    //     cout<<i<<" ";
    // }


    //2nd Method : using an extra variable
    int a = 4;

    for(int i = 1 ;i <= n  ; i++)
    {
        cout<<a<<" ";
        a+=3;
    }

    return 0;
}