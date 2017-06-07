#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
string & simpleTest(string a);

int main()
{

  { ///variable scope
 int a;
 string str;
 cout<<"Input a integer and a string :"<<endl;
 cin>>a>>str;
  cout<<simpleTest(str)<<endl;
  cout<<a<<endl;
  }///a and simpleTest function destroys here


    return 0;
}
string & simpleTest(string a){

   return a;
}
