#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    int ascii = (int)ch;

    if(((ascii>=48) && (ascii<=57))||((ascii>=65) && (ascii<=90))||((ascii>=97) && (ascii<=122)))
    {
        cout<<"Character is number or an alphabet!";
    }
    else
    {
        cout<<"Character is a special symbol!";
    }
}