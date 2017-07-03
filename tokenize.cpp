#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(void){
  char str[100],str2[100],i=0,j=0,ck=0;
  long long n;
  gets(str);
  while(str[i]){
   while(str[i] != 32 && str[i] != NULL)str2[j++]=str[i++];
    if(str[i]==32 && str[i+1] == 32){
        i++;
        continue;
    }
    n=atoll(str2);
    while(j!=0)str2[j--]='\0';
   if(n!=0) cout<<n<<endl;
  i++;
  }
   return 0;
  }

