#include<iostream>
using namespace std;
int main()
{
        int m;
    cout<<"Enter the value of m: \n";
    cin>>m;

    int a[m][m];

    
     cout<<"Enter elements of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cin>>a[i][j];
       }
    }

      cout<<"Printing elements of array : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }
    
    for(int i=0;i<m;i++)
    {
       for(int j=i;j<m;j++)
       {
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;

       }
    }
    
     for(int j=0;j<m;j++)
     {
          int low=0;
            int high=m-1;
            while(low<high)
            {
                int temp=a[low][j];
                a[low][j]=a[high][j];
                a[high][j]=temp;
                low++;
                high--;
            }
         
     }

          cout<<"Printing elements of array after anticlockwise rotation : \n";
     for(int i=0;i<m;i++)
    {
       for(int j=0;j<m;j++)
       {
       cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }
    
  
}