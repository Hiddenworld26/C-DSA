#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int nr;
    cout<<"Enter the value of numrows : \n";
    cin>>nr;
    cout<<"\n";
vector<vector<int>>v;
for(int i=0;i<nr;i++ )
{
    vector<int>a(i+1);
    v.push_back(a);
}
for(int i=0;i<nr;i++)
{
    for(int j=0;j<=i;j++)
    {
        if(j==0||j==i)
        {
            v[i][j] = 1;
        }
        else
        {
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }
}
//printing whole pascal triangle 
 for(int i=0;i<nr;i++)
 {
     for(int j=0;j<=i;j++)
     {
        cout<<v[i][j]<<" ";
     }
     cout<<endl;
 }
cout<<endl;
//printing the row index
int ri ;
cout<<"Enter the value of rowindex : \n";
cin>>ri;
for(int j=0;j<=ri;j++)
cout<<v[ri][j]<<" ";
}
