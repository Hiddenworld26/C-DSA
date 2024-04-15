#include<iostream>
using namespace std;
int main()
{
    char ch1;
    char ch2;
    cout<<"Enter 1st character : \n";
    cin>>ch1;
    cout<<"Enter 2nd character : \n";
    cin>>ch2;

    //typecasting characters to their ASCII values
    int ascii_ch1 = (int)ch1;
    int ascii_ch2 = (int)ch2;

    int ascii_difference = ascii_ch2 - ascii_ch1;

    cout<<"Difference of two ascii characters is "<<ascii_difference<<endl;

}