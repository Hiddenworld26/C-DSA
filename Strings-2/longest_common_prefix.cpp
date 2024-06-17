#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
 string strs[] = {"flower","flow","flight"};

//  sort(strs[0].begin(),strs[0].end());
//  sort(strs[1].begin(),strs[1].end());
//  sort(strs[2].begin(),strs[2].end());

int n = sizeof(strs)/sizeof(strs[0]);

sort(strs,strs+n);


 for(int i = 0 ; i<(strs[0].length()) ; i++)
 {
    if(strs[0][i] == strs[2][i]) 
    {
        cout<<strs[0][i];
    }
    else 
    {
        break;
    }
 }
 

 




}