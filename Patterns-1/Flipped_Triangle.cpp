#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter no of rows and columns : "<<endl;
    cin>>n;

    for(int  i =1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            if((i+j)>=n+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}