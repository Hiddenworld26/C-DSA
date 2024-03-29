#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of vector :\n";
    cin>>x;
    vector<int>v1(x);
    vector<int>v2(x);

    cout<<"Enter the elements of vector1 : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>v1[i];
    }

    //copy elements

    for(int i=0;i<x;i++)
    {
        v2[i]=v1[x-1-i];
    }
       
    //printing elements of vector 2 in revrese order
    cout<<"Printing lements in reverse order  :\n";
    for(int i=0;i<x;i++)
    {
        cout<<v2[i]<<" ";
    }



}