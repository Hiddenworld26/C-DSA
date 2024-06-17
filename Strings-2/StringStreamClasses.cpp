#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string str;

    cout<<"Enter string : ";
    getline(cin,str);

    stringstream ss(str);

    string temp;
    int count = 0;
    while(ss>>temp)

    {
        cout<<temp<<endl;
        count++;
    }

    cout<<"Total no of words in string : "<<count;
}