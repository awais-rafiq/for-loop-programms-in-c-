//input a number from the user and prints the lowest and heighest digit of number

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	int num=n;
	int high=n%10,  low=n%10, rem;
	n=n/10;
	for(int i=n; i>=1;i=i/10)
	{
		rem=i%10;
		if(rem>high)
		high=rem;
		if(rem<low)
		low=rem;
	}
	cout<<"the heighest digit of "<<num<<"is"<<high<<endl;
    cout<<"the lowest digit of "<<num<<"is"<<low;
}
