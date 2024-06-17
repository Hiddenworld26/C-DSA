#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
      string str="abcde";
      cout<<str<<endl;
      cout<<str.length()<<endl;
      cout<<str.size()<<endl;
      str.push_back('f');
      cout<<str<<endl;
      str.pop_back();
      cout<<str<<endl;

      string s="fg";

      s+=str;
      cout<<s<<endl;
      
      reverse(str.begin(),str.end());
      cout<<str<<endl;







}