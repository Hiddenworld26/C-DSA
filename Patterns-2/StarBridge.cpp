#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout<<"Enter number of rows : ";
    cin>>n;
    
    int m = n-1;

    for(int t = 1;t<=(2*n-1);t++)
    {
        cout<<"* ";
    }
    cout<<endl;

    for(int i = 1;i<=m;i++)
    {
       
        for(int k = 1; k<=(n-i);k++)
        {
            cout<<"* ";
        }

        for(int p = 1 ; p<=(2*i-1);p++)
        {
            cout<<"  ";
        }

        for(int k = 1; k<=(n-i);k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
  
}