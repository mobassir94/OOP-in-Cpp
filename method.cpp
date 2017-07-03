#include<iostream>
#include<cstdio>
using namespace std;
class method{
    int a,b;
  public:
      int add(int a,int b);
      void init(int i,int j);
      int addabs();

};

inline int method::add(int c,int d){
    return ((a+b)+(c+d));

}
void method::init(int i,int j){
   a=i;
   b=j;
}

 int method::addabs(){
    return a+b;

}
int main()
{
    /*
    for(int i=65; i<=90; i++)printf("%c  ",i);
    printf(".\n\n");
      for(int i=97; i<=122; i++)printf("%c  ",i);
      printf(".\n\n");
        for(int i=0; i<=100; i++)printf("%d  ",i);
         */
    cout<<endl;
    cout<<"Simple method test : "<<endl;
    int a,b;
    printf("input 2 integer Number below : \n");
    //scanf("%d%d",&a,&b);
    cin>>a>>b;
    method mymethod;
    mymethod.init(a,b);
    printf("Absolute result is : %d \n",mymethod.addabs());
    printf("adding 2+2=4 more to the absolute result: %d \n",mymethod.add(2,2));

    return 0;
}
