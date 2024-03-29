#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"Enter the value of sp : \n";
    cin>>sp;
    cout<<"Enter the value of cp : \n";
    cin>>cp;
    if(sp>cp)
    {
        cout<<"Profit😎"<<endl;
    }
    else if(sp==cp)
    {
        cout<<"Neither profit nor loss😗"<<endl;
    }
    else
    {
       cout<<"Loss😟"<<endl; 
    }
}