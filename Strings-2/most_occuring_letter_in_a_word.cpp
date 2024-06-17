#include<iostream>

#include<string>

#include<algorithm>


#include<vector>
#include<climits>

using namespace std;

int main()
{
    string str;

    cout<<"Enter string : ";
    getline(cin,str);

    vector<int>v(26,0);

    int ascii;

    for(int i =0 ; str[i] != '\0' ; i++)
    {
        ascii = int(str[i]);

        v[ascii-97]++;

    }

    int max = INT_MIN;
    int index= 0 ;
    

    for(int i = 0; i<26 ; i++)
    {
        if(v[i]>max)
        {
            max=v[i];
           index=i;

           
        }
    }

    cout<<char(index+97);

}


