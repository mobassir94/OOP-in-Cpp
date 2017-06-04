#include<iostream>
#include<cstdio>
using namespace std;

///designing a class called car

class car{
  public:
      int height,width;
      string color,name;
      double price,weight;
      int car_info();

};
int car::car_info(){
    printf("My car details : \n\n");
  cout<<"name: "<<name<<endl<<"height : "<<height<<endl<<"width : "<<width<<endl;
  cout<<"color: "<<color<<endl<<"price: "<<price<<endl<<"weight: "<<weight<<endl;
}
int main()
{
    car mycar; ///here mycar is the object of car class
    mycar.color="red";
    mycar.height=15;
    mycar.name="BMW";
    mycar.price=300000;
    mycar.weight=100;
    mycar.width=10;
    mycar.car_info();


    return 0;
}
