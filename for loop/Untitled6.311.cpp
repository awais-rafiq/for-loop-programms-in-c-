#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;    
	int num=n;
     int high=n%10;
     int low=n%10;
     int rem;
     
     for(int i=n;i>=1;i=i/10)
     {
     	rem=i%10;
     	if(rem>high)
     	high=rem;
     	if(rem<low)
     	low=rem;
	 }
	 cout<<"high is "<<high<<endl<<"and low is "<<low;


}
