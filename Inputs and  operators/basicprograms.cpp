#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    cout<<(x=7)<<endl;  //It is same as : x=7 , then cout<<x;

    //x+=8 is better than x = x+8 , calculation wise

    bool b = true;
    cout<<b+10<<endl;
}