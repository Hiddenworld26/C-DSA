#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value  of number : \n";
    cin>>num;
    if((num%3==0)||(num%5==0))
    {
        cout<<"Input number is divided by 5 or 3"<<endl;
    
    }
    else
    {
         cout<<"Input number is not divided by 5 or 3"<<endl;
    }
}

/*
Note:
1.In '&&',
 If condition 1  is false,then compiler doesn't check for conditon2
2.In '||',
 If condition 1  is true,then compiler won'tn't check for conditon2
*/