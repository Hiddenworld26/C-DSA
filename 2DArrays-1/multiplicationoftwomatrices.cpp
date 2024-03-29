#include<iostream>
using namespace std;
int main(){
       int m,n;
    cout<<"Enter the number of rows of 1st matrix:  \n";
    cin>>m;
    cout<<"Enter the number of columns of 1st matrix:  \n";
    cin>>n;

    int p,q;
    cout<<"Enter the number of rows of 2nd matrix:  \n";
    cin>>p;
    cout<<"Enter the number of columns of 2nd matrix:  \n";
    cin>>q;

    if(n!=p)
    {
        cout<<"Matrices cannot be multiplied!\n";
    }

    else
    {
        int a[m][n];
    cout<<"Enter the elements of 1st matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int b[p][q];
    cout<<"Enter the elements of 2nd matrix : \n";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

    int res[m][q];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
             res[i][j]=0;
           for(int k=0;k<n;k++)
           {
            
            res[i][j]+=a[i][k]*b[k][j];
            
           }
        }
    }
cout<<"Printing the elements of resultant of matrix multiplication : \n";
  for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
           cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }

    }
}