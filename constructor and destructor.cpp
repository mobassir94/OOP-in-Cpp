///constructor overloading and destructor
#include<iostream>
#include<cstdio>
using namespace std;

class test{
   public:
       int a,b,c;
       test();
       ~test();
       int mytest();
       test(int A,int B);
       test(int A,int B,int C);

};


///constructor with no parameter

test::test(){
    a=0,b=0,c=0;
   cout<<"Constructor with NO parameter"<<endl;

}


///destructor

test::~test(){
printf("Constructor created last is destrcting first here\n");
}



///constructor with double parameter

test::test(int A,int B){
    printf("Constructor with double parameter  adding a+b: ");
   a=A,b=B;
   cout<<a+b<<endl;

}

///constructor with tripple parameter

test::test(int A,int B,int C){
a=A,b=B,c=C;
  printf("Constructor with tripple parameter adding a+b+c: ");
cout<<a+b+c<<endl;

}


int test::mytest(){
  if(a==b==c==0){
    printf("Constructor initialed all three variables succesfully\n");
  }
  else
    printf("Something isn't right\n");

}
int main()
{
    test obj,obj1(2,3),obj2(1,8,4);

    obj.mytest();


    return 0;
}
