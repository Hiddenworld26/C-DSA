#include<iostream>
using namespace std;

int main()
{
    cout<<"Printing numbers that are divisible by 3 from 1 to 100 : \n";
    for(int i=1;i<=100;i++)
    {
        if((i%3)==0)
        {
            cout<<i<<endl;
        }
    }
}