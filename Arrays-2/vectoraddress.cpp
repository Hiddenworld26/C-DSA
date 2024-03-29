#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(3);
    int *ptr=&v[0];
    cout<<ptr<<endl;
    v.push_back(6);
    int *p=&v[0];
    cout<<p;



}