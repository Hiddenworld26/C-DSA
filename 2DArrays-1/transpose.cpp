#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of m : \n";
    cin>>m;
    cout<<"Enter the value of n : \n";
    cin>>n;
    int a[m][n];
    

     cout<<"Enter elements of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
       cin>>a[i][j];
       }
    }

    int t[n][m];
     for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
       t[i][j] = a[j][i];
       }
    }

     cout<<"Elements of transpose array : \n";
     for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
      cout<<t[i][j]<<" ";
       }
       cout<<endl;
    }
}