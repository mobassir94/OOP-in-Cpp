#include<iostream>
#include<vector>
#include<stdio.h>
#include<math.h>
using namespace std;

int primecheck(vector <int> arr);
int main()
{
    int total;
    vector<int>arr;

   // arr.push_back(1);
    //cout<<arr[0];
   total = primecheck(arr);
   printf("Total Prime : %d\n\n",total);
    return 0;
}

///function that counts and returns total prime number to main function

int primecheck(vector <int> arr)
{
    int n,ck,square;
    printf("Enter Numbers below(press CTRL+Alt+Z) to terminate : ");
   while(~scanf("%d",&n)){
        ck=1;
        if(n<2){
            printf("Enter Numbers below(press CTRL+Alt+Z) to terminate : ");
            continue;
        }
        square = sqrt(n);
       for(int i=2;i<=square; i++){
        if(n%i==0){
                ck=0;
                break;
        }
       }
   if(ck)arr.push_back(n);
    printf("Enter Numbers below(press CTRL+Alt+Z) to terminate : ");
   }
   printf("\n\n\t\t>>>>Input is over<<<< \n\n");
  // printf("size : %d",arr.size());
     for(int i=0; i<arr.size(); i++)printf("\t%d is prime \n",arr[i]);
     printf("\n\t\t");
   return arr.size();

}
