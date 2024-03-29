#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    int x;
    cout<<"Enter value of x : \n";
    cin>>x;
    cout<<"Entering elements in vector : \n";
    for(int i=0;i<v.size();i++)
    {
          cin>>v[i];
    }
    cout<<"Printing elements of vector : \n";
    for(int i=0;i<v.size();i++)
    {
          cout<<v[i]<<" ";
    }
    cout<<endl;
    //forward loop
    // int idx;
    // for(int i=0;i<v.size();i++)
    // {
    //       if(v[i]==x)
    //       {
    //         idx=i;
    //       }
    // }
    // cout<<idx;

    //backward loop
    int idx;
    for(int i =v.size();i>=0;i--)
    {
    if(v[i]==x)
    {
        idx=i;
        break;
    }

    }
    cout<<idx;

}