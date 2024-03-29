#include<iostream>
#include<vector>
using namespace std;
void  swap(vector<int>&a)
{
    int  i=1;
    int j=a.size()-2;
    while (i<=j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }
    
}
void display(vector<int>a)
{
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}
int main()
{
    vector<int>v(6);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    cout<<"Enter elements of vector : \n";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    display(v);
    cout<<endl;
    swap(v);
    display(v);


}