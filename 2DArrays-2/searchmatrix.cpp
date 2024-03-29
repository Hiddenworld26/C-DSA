#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of rows :\n";
    cin>>m;
    cout<<"Enter the value of columns : \n";
    cin>>n;

    int a[m][n];

        
    cout<<"Enter the value of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Print tht value of matrix : \n";
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;

     int i =0;
     int j=n-1;

     int target;
     cout<<"Enter the value to be searched in matrix : \n";
     cin>>target;
          
     while((i<m)&&(j>=0))
     {
        if(a[i][j]==target)
        return 1;
        else if(a[i][j]<target)
        i+=1;
        else 
        j-=1;
     }


return 0;



}