#include<iostream>
using namespace std;
void display(int a[])
{
   for(int i=0;i<=4;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;
   return;
}
void change(int b[])
{
    b[0]=100;
}
int  main()
{
    int arr[]={1,4,8,7,46};
    display(arr);
    change(arr);
    display(arr);

    //number of  elements in array-never  gets  passed in function,we have to declare the size

}