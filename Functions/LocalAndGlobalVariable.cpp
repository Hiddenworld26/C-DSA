#include<iostream>

using namespace std;


int a = 9; //Global Variable

void func()
{
   cout<<a<<endl; 
   int a = 1; //Local Variable
   cout<<a<<endl;

}

int main()
{
    
    a = 2;
    func();

    int a = 3; //Local variable
    cout<<a<<endl;

}