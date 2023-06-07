#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int i,x,n;
  float sum=0,den;
  cout<<"enter the value of x "<<endl;
  cin>>x;
  cout<<"enter the range "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	den=pow(x,i);
  	sum=sum+(1/den);
  }	
  cout<<"sum of series"<<sum;
}
