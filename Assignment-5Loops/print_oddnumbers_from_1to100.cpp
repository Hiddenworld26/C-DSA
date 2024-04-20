#include<iostream>
using namespace std;

int main()
{
    cout<<"Printing all the odd numbers from 1 to 100 : \n";
    for(int i=1;i<100;i++)
    {
        if((i%2)!=0)
        {
            cout<<i<<endl;
        }
    }
}