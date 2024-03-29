#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1 = {1,2,3};
    vector<int>v2 = {4,5};
    vector<int>v3 = {6,7,8,9};
    vector<int>v4 = {10};

//     vector<vector <int> > v;
//    v.push_back(v1);
//     v.push_back(v2);
//      v.push_back(v3);


//      cout<<v[0][0]<<endl;
// cout<<v.size();
     
     //int a[3][4]

     vector<vector<int>>v5(3,vector<int>(4));

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>v5[i][j];
        }
    }

  for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v5[i][j];
        }
    }



    

}
