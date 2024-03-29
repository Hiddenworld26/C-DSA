#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value  of number : \n";
    cin>>num;
    if((num%3==0)&&(num%5==0))
    {
        cout<<"Input number is divided by 5 and 3"<<endl;
    
    }
    else
    {
         cout<<"Input number is not divided by 5 and 3"<<endl;
    }
    /*
      if(num%5==0)
      {
        if(num%3==0)
      }
    */
}