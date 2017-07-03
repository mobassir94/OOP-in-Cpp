#include<iostream>
#include<cstdio>

using namespace std;
int j=1;
class ptr{

  public:
      int fun();
};

inline int ptr::fun()
{
     for(int i=0;i<5; i++,j++)cout<<j <<" "<<endl;
     if(j==26)j=1;
     printf("\n");
}
int main()
{
    ptr obj[3];///object array
    for(int i=0;i<5; i++)obj[i].fun();
    ptr *p;
    p=obj; ///assigning &obj[0] to object pointer *p
    printf("pointer object: \n");
     for(int i=0;i<5; i++)(p+i)->fun();
    return 0;
}
