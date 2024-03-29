#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(78);
    v.push_back(90);
    v.push_back(12);
    v.push_back(45);
    v.push_back(23);
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

}