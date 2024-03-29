#include<iostream>
using namespace std;
  int main()
  { 
    int  num;
    cout<<"Enter marks : ";
    cin>>num;
    if((num>=90)&&(num<=100))
    {
        cout<<"Excellent!"<<endl;
    }
    else if((num>=80)&&(num<=89))
    {
        cout<<"Very Good!"<<endl;
    }
    else if((num>=70)&&(num<=79))
    {
        cout<<"Good!"<<endl;
    }
    else if((num>=50)&&(num<=69))
    {
        cout<<"Average!"<<endl;
    }
    else if((num>=40)&&(num<=49))
    {
        cout<<"Just Pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
  }