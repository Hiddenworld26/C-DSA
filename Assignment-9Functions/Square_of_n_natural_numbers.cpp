#include<iostream>
using namespace std;

void print(int n)
{
    for(int i = 1;i<=n;i++)
    {
        int square = i * i;
        cout<<"Square of "<<i<<" is "<<square<<endl;
    }
}

int main()
{
    print(5);
   
}