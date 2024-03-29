#include<iostream>
using namespace std;



void mid(int arr[][100],int n)
{
    int mid=n/2;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if((i==mid)||(j==mid))
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
}
int main()
{   
    int m;
    cout<<"Enter the size of matrix : \n";
    cin>>m;
    int a[100][100];
    cout<<"Enter the value of matrix : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    mid(a,m);

    

}