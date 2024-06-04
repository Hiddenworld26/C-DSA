#include<iostream>

using namespace std;

int func(int x , int y)
{
    cout<<&x<<endl<<&y;
}

int main()
{
    int x ;
    int y;

    
    cout<<&x<<endl<<&y<<endl;

    func(x,y);

}