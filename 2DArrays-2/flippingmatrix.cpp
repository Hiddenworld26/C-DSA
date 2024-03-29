#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows : \n";
    cin>>m;
    cout<<"Enter the number of columns : \n";
    cin>>n;

  vector<vector<int>>v(m,vector<int>(n));
    
    
    
    cout<<"Enter the value of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    
    cout<<"Print tht value of matrix : \n";
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;

  //flipping matrix
   
     for(int i=0;i<m;i++)
    {
        if(v[i][0]==0)
        {
             for(int j=0;j<n;j++)
             {
                if(v[i][j]==0) 
                {
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
             }
        }

    }
   
   for(int j=0;j<n;j++)
   {
       int count0=0;
        int count1=0;
    for(int i=0;i<m;i++)
    {
        
        if(v[i][j]==0)
        {
            count0=count0+1;
        }
        else{
            count1=count1+1;
        }
        

    }

    if(count0>count1)
        {
            for(int i=0;i<m;i++)
            {
            if(v[i][j]==0)
            {
              v[i][j]=1;
            }
            else
            {
                 v[i][j]=0;
            }
            }
        }
   }

    cout<<endl;

    cout<<"Print tht value of matrix after flipping: \n";
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;

     //score
     int sum=0;
    for(int i=0;i<m;i++)
    {
       for(int j=(n-1);j>=0;j--)
       {
        sum+=(v[i][j]*pow(2,n-(j+1)));
       }
    }
    cout<<"Score is : \n"<<sum;

}