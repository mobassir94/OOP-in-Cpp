#include<iostream>
#include<cstdio>

using namespace std;
int main()
{

    enum test{
     zero,
     one,
     two,
     three,
     four,
     five
    }var1;
   enum test var;
    var=four;
    printf("%d \n\n",var);


    char name[][6]={
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five"
    };
    printf("%s ",name[var]);
    return 0;
}
