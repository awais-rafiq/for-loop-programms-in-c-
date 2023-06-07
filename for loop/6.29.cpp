//find the sum of squares of integers from 1 to n where n is  apositive value entered by the user (i.e sum= 1^2+2^2......n^2)

#include<iostream>
using namespace std;
int main()
{
  float sum =0;
  int n,c;
  cout<<"enter the number";
  cin>>n;
 for(c=1;c<=n;c++)
    sum =sum+(c*c);
 cout<<"Sum is "<<sum;
}

