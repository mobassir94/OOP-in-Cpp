#include<bits/stdc++.h>
using namespace std;
void area(); //cube
int area(int); //square
int area(int,int); //rectangle
float area(float); //circle
float area(float,float); //triangle

class shape{
public:void area()
{
     float length,area;

        printf("The length of cube : ");

        if(scanf("%f",&length)==1)
        {
            area=pow(length,3);
            printf("The volume of cube is %f",area);
        }
        else
        {
            printf("error,enter correct value");
        }
}
public:int area(int s)
{
    return(s*s);
}
public:int area(int l,int b)
{
    return(l*b);
}
public:float area(float r)
{
    return(3.14*r*r);
}
public:float area(float bs,float ht)
{
   return((bs*ht)/2);
}
};



int main()
{
 float a =3.8;
 shape obj;
 obj.area();
 obj.area(a);
}
