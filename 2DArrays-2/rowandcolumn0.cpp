#include<iostream>
using namespace std;
int main()
{
    int m=3;
    int n=3;
    int a[m][n];

     cout<<"Enter the value of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                for(int p=0;p<n;p++)
                {
                    a[i][p]=0;

                }
                 for(int q=0;q<m;q++)
                {
                    a[q][j]=0;
                }

                i+=1;
                j+=1;
            }
        
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
}