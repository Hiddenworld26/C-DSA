#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str;
   cout<<"Enter string : ";
    cin>>str;
    cout<<str<<endl;
    bool flag=true;
    for(int i=0,j=str.size()-1;i<=j;i++,j--)
    {
        if(str[i]!=str[j])
        {
          flag=false;
          break;
        }
    }
    if(flag==false)
    {
        cout<<"String is not palindrome ";
    }
    else
    {
     cout<<"Palindrome String ";
    }


}