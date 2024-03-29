#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows : \n";
    cin>>m;
    cout<<"Enter the number of columns : \n";
    cin>>n;
    int a[m][n];
    int b[m][n];
    int sum[m][n];
  

    cout<<"Enter elements of 1st array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
       cin>>a[i][j];
       }
    }
 cout<<"Enter elements of 2nd array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
       cin>>b[i][j];
       }
    }

    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
        sum[i][j]=a[i][j] + b[i][j];
       }
    }
      cout<<"Sum of two arrays: \n";
      for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
       cout<<sum[i][j]<<" ";
       }
       cout<<"\n";
    }
}