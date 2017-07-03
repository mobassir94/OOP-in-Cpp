///example of new and delete keyword in c++

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    ///pointer variable
   int *p;
   p=new int (4);///new gives *p an address and assigning 4 to that variable
    cout<<*p<<endl;
    delete(p);///deleting space occupied by new

    ///working with pointer arrays

    int *ptr=new int [5];
    cout<<"printing value from pointer array: "<<endl;
    for(int i=50,j=0; i<55; i++){
       ptr[j]=i;
       j++;
    }
    for(int j=0;j<5; j++){
        printf("\n%d ",ptr[j]);
        printf("%d ",*ptr+j);
          }
     cout<<"\n"<<endl;
    delete(ptr); ///pointer (ptr) array gets deleted here
    return 0;
}
