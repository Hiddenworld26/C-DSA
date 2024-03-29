#include<iostream>
using namespace std;
int main()
{
     int m,n;
    cout<<"Enter the number of rows :  \n";
    cin>>m;
    cout<<"Enter the number of columns :  \n";
    cin>>n;

    int a[m][n];
    cout<<"Enter the elements of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Printing the elements in the wave form : \n";
     for(int j=0;j<n;j++)
     {
        if((j%2)==0)
        {
            for(int i=(m-1);i>=0;i--)
        {
           cout<<a[i][j]<<" ";
        }
        }
        else{
            for(int i=0;i<m;i++)
            {
                 cout<<a[i][j]<<" ";
            }
        }
     }
}