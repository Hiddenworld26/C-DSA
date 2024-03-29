#include<iostream>
#include<vector>
using namespace std;

// void change(int arr[100][3])
// {
//     arr[0][0]=100;
// }
void vectorchange(vector<vector<int>>&v1)  // No need to pass size
{
    v1[0][0]=100;
}
int main()
{
    //passing 2d arrays to functions

    // int a[2][3]={{1,2,3},{4,5,6}};
    // cout<<a[0][0]<<endl;
    // change(a);
    // cout<<a[0][0];

vector <vector<int>>v(3,vector<int>(4,2));
   cout<<v[0][0]<<endl;
   vectorchange(v);
   cout<<v[0][0]<<endl;

  return 0;

}