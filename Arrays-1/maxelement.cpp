#include <iostream>
#include<climits>
using namespace std;

int main() {
    int arr[5]={23,110,34,1,69};
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;

    return 0;
}