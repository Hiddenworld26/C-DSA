#include<iostream>

#include<string>

#include<vector>

using namespace std;

bool isomorphic(string s , string t)
{

    int ascii = 0;
    vector<int>v(150,1000);

    if(s.length()!=t.length())
    {
        cout<<"Strings are  not isomorphic"<<endl;
        return false;
    }

    else
    {
        
        for(int i = 0 ; i<s.length();i++)
        {
           ascii = int(s[i]);

            if(v[ascii]==1000)
            {
                v[ascii] = int(s[i])-int(t[i]);
            }
            else
            {
               if(v[ascii]!=(s[i])-int(t[i]))
               
               return false;
            }
        }

        for(int i = 0 ; i<150;i++)
        {
            v[i]=1000;
        }

        for(int i = 0 ; i<t.length();i++)
        {
            ascii = int(t[i]);

            if(v[ascii]==1000)
            {
                v[ascii] = int(t[i])-int(s[i]);
            }
            else
            {
               if(v[ascii]!=int(t[i])-int(s[i]))
               
               return false;
            }
        }
    }
  
  return true;
}

int main()
{
    string s;
    cout<<"Enter the 1st string : ";
    getline(cin,s);

    string t;
    cout<<"Enter the 2nd string : ";
    getline(cin,t);

    cout<<isomorphic(s,t);

    


}