#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value of number : \n";
    cin>>num;
    if((num>99)&&(num<1000))
    {
        cout<<"Input number is 3-digit numbered"<<endl;
    }
    else
    {
        cout<<"Input number is not 3-digit numbered"<<endl;
    }
}