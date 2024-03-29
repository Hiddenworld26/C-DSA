#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the order of square matrix : \n";
    cin>>m;

    
    int a[m][m];
    cout<<"Enter the elements of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Printing the elements of a diagonal matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i==j)||((i+j)==(m-1)))
            cout<<a[i][j]<<" ";
        }
    }
}