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
      int calc_sum;
    int sum=0, index=0;
     for(int i=0;i<m;i++)
    {
         calc_sum=0 ;
        for(int j=0;j<n;j++)
        {
            
           calc_sum+=a[i][j];
           
        }
        if(calc_sum>sum)
           {
            sum=calc_sum;
            index=i;
           }
    }
   cout<<"Index of row  having maximum sum is "<<index;
}