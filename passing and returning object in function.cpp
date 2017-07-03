#include<iostream>
#include<cstdio>

using namespace std;

class me{
  public:
      int n;
      int fun(int a,int b);
     // int func(int i,int j);
};


inline int me::fun(int a,int b){

     return a+b;
}

///function that returns and passes object

me myfunc(me ob){
  ob.fun(2,2);
  ob.n=5;
  return ob;

}


int main()
{
    me obj;
    obj=myfunc(obj);
    printf("%d ",obj.n);
    return 0;
}
