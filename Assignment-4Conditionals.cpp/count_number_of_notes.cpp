#include<iostream>
using namespace std;

int main()
{
    int amount ;
    cout<<"Enter amount : ";
    cin>>amount ;

    int n2000 = 0;
    int n500 = 0;
    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;

    switch(amount>=2000)
    {
        case 1 : 
        {
            n2000 = amount / 2000 ;
            amount = amount - (n2000*2000);
            break;
        }
    }
    switch(amount>=500)
    {
        case 1 : 
        {
            n500 = amount / 500 ;
            amount = amount - (n500*500);
            break;
        }
    }

    switch(amount>=100)
    {
        case 1 :
        {
            n100 = amount / 100;
            amount = amount - (n100*100);
            break;
        }
    }

    switch(amount>=50)
    {
        case 1 :
        {
            n50 = amount / 50;
            amount = amount - (n50*50);
            break;
        }
    }

    switch(amount>=20)
    {
        case 1 :
        {
            n20 = amount / 20;
            amount = amount - (n20*20);
            break;
        }
    }
    switch(amount>=10)
    {
        case 1 :
        {
            n10 = amount / 10;
            amount = amount - (n10*10);
            break;
        }
    }

    switch(amount>=5)
    {
        case 1 :
        {
            n5 = amount / 5;
            amount = amount - (n5*5);
            break;
        }
    }

    cout<<"Total nummber of notes are : "<<" of 2000 = "<<n2000<<endl<<
    " of 500 = "<<n500<<endl<<" of 100 = "<<n100<<endl<<" of 50 = "<<n50<<endl<<
    " of 20 = "<<n20<<endl<<" of 10 = "<<n10<<endl<<" of 5 = "<<n5<<endl;



}