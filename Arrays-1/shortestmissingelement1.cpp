#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 5, 7, 10};
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        if(arr[i]!=arr[i+1]+1)
        {
           int n=arr[i+1]-arr[i];
           for(int j=0;j<(n-1);j++)
           {
            v.push_back(arr[i]+1);
           }
        }
    }
    if (!v.empty())
    {
        cout << "The smallest missing positive element is: " << v[0] << endl;
    }
    else
    {
        cout << "No missing positive element found." << endl;
    }
}