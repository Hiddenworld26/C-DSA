#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number of rows and columns : ";
    cin>>n;

    for(int  i =1;i<=(2*n);i++)
    {
        for(int j =1;j<=n;j++)
        {
            if(i<=n)
            {
                if((i+j)>=(n+1))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            if(i>n)
            {
                if(((i-n)==j) || (j>(i-n)))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}