#include<iostream>
using namespace std;

int main()
{
    int n ;

    cout<<"Enter the number of rows : ";

    cin>>n;

    int nsp = (n+1);

    for(int i = 1 ;i<=(n/2+1) ; i++)
    {
       for(int j = 1 ; j <= i ; j++)
       {
        cout<<"* ";
       }

       for(int k = 1;k<=nsp;k++)
       {
        cout<<"  ";
       }
       nsp-=2;

       for(int j = 1 ; j <= i ; j++)
       {
        cout<<"* ";
       }

       cout<<"\n";
    }

    for(int a = 1 ; a<=2;a++)
    {
        for(int b = 1 ; b<=(2*n-1);b++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    
    for(int p = 1; p<=(n-1);p++)
    {
        for(int q = 1 ; q<=(n-p);q++)
        {
            cout<<"* ";
        }

        for(int r = 1; r<=(2*p-1);r++)
        {
            cout<<"  ";
        }

        for(int q = 1 ; q<=(n-p);q++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}