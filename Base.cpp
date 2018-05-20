///Cpp program to Convert Any Number From Any Base Number System to Another Base Number
#include<iostream>

using namespace std;

string to_base(int number,int base)
{
    string bases = "0123456789ABCDEF";
    string result = "";
    while(number > 0){

    result += bases[number % base];
    number/=base;
    }
    return result;
}
int main()
{
    int number,base;
    cout<<"input Number :";
     cin>>number;
    cout<<"input base : ";
    cin>>base;
   string res =  to_base(number,base);
   cout<<"Answer : "<<res<<endl;
}
