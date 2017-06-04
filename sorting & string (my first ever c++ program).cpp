#include<iostream>
#include<algorithm>
#define max 100
using namespace std;

int main()
{
  int arr[max],n;
  string str="its 6/4/2017 and its my first ever c++ program";
  cout<<str<<'\n'<<"\n"<<"\t"<<"how many numbers? : ";
  cin>>n;
  cout<<'\n'<<'\t'<<"Enter "<<n<<" Numbers below:"<<'\n';
  for(int i=0; i<n; i++)
     cin>>arr[i];
  sort(arr,arr+n);
  cout<<'\n'<<'\t'<<"Output in sorted order "<<"\n";
    for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
    cout<<"\n";
  return 0;
}
