#include<iostream>
#include<string>

using namespace std;

int main()
{
  int num = 123456;

  string s = to_string(num);

  int nofw = s.length();
  cout<<nofw<<endl;


  //converting back to string

  int x = stoi(s); //stoll
  cout<<x<<endl;


}