#include<iostream>
using namespace std;
int main()
{
    int arr[5]={23,65,34,87,90};
    int *ptr=arr;
    //accessing elements of array through pointer
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}