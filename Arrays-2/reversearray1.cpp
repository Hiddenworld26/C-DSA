#include <iostream>
#include<vector>
using namespace std;


int main() {

    vector<int>v(5);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v1(v.size());
    for(int i=0;i<v1.size();i++)
    {
        int j=v.size()-1-i;
        v1[i]=v[j];
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}