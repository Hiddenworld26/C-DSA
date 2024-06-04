#include<iostream>

using namespace std;

int func(int x = 1 , int y = 2 , float z = 13.6 , bool t = true)
{
    cout<<x<<" "<<y<<" "<<z<<" "<<t;
}

int main()
{
    
    //case 1
    //func(3,5);

    //case 2
    //func();

    //case 3
    //func(12);

    //case 4
    func(0);

}