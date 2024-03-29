#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character : \n";
    cin>>ch;
    int asval=(int)ch;
    if((asval>=97)&&(asval<=122))
    {
        cout<<"Entered character is lowercase alphabet"<<endl;
    }
    else if((asval>=65)&&(asval<=90))
    {
        cout<<"Entered character is uppercase alphabet"<<endl;
    }
    else
    {
        cout<<"Entered character is not alphabet"<<endl;
    }
}
