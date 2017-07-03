///assignning a class object to its another object in c++ and use of this pointer

#include<iostream>
#include<cstdio>

using namespace std;

class simpleobj{
    int i;
   public:
       int k;
       //int a;
       int test(int j);
};

inline int simpleobj::test(int j){
   this-> i=j;
    printf("private i: %d \n",i);
    k=j;
    return i;
}
int main()
{
    int n;
    simpleobj obj1,obj2;
    printf("input a number : ");
    cin>>n;
   cout<<"given number : "<<obj1.test(n)<<endl;
      //cout<< obj2.k<<endl; ///it will print garbage value as obj1 isn't assigned to obj2 so k has garbage value in obj2
      obj2=obj1;
      printf("Assigned to second object : ");
     cout<< obj2.k<<endl;

    return 0;
}

