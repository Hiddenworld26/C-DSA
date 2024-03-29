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
    cout<<"Printing the elements in spiral form : \n";
    int tne=m*n;
    int count =0;
    int minrow=0;
    int maxrow=m-1;
    int mincol=0;
    int maxcol=n-1;

    while((minrow<=maxrow)&&(mincol<=maxcol))
    {
        //right
        for(int j=mincol;j<=maxcol&&count<=tne;j++)
        {
            cout<<a[minrow][j]<<" ";
        }
        minrow++;
        
        //down
        for(int i=minrow;i<=maxrow&&count<=tne;i++)
        {
            cout<<a[i][maxcol]<<" ";
        }
        maxcol--;

        //left
        for(int j=maxcol;j>=mincol&&count<=tne;j--)
        {
            cout<<a[maxrow][j]<<" ";
        }
        maxrow--;

        //up
        for(int i=maxrow;i>=minrow&&count<=tne;i--)
        {
            cout<<a[i][mincol]<<" ";
        }
        mincol++;

    }

}
