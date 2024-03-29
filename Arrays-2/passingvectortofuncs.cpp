#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}
void change(vector<int>v2)
{
    v2[0]=100;
}
void changewithref(vector<int>&v2)
{
    v2[0]=100;
}


int main()
{
    vector<int>v;
    v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
    display(v);
    cout<<endl;

    change(v);
    cout<<endl;
    
    display(v);
    cout<<endl;

    changewithref(v);
    cout<<endl;
    display(v);

}