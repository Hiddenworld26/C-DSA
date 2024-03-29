#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int>v1(6);
    cout<<"Enter elements in vector : \n";
    for(int i=0;i<v1.size();i++)
    {
        cin>>v1[i];
    }
    display(v1);
    cout<<endl;
    vector<int>v2(v1.size());
    // for(int i=0;i<v2.size();i++)
    // {
    //     int j=v2.size()-1-i;
    //     v2[i]=v1[j];
    // }
    int i,j;
    for( i=0, j=v1.size()-1;i<=v2.size()-1,j>=0;i++,j--)
    {
        v2[i]=v1[j];
    }
    display(v2);



}
