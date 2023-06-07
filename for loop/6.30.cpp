//dipaly a tabel of equivalent temperature in both farenheight and celsius with an increment ogf 5 from 50 to 100
//#include<iostream>
//using namespace std;
//int main()
//{
//	int cel;
//	float fh;
//	cout<<"farenheight    celcuis "<<endl;
//	for(fh=50;fh<=100;fh=fh+5)
//	{
//	cel=(fh-32)/1.8;
//	cout<<fh<<"   "<<cel<<endl;
//}
//}
#include<iostream>
using namespace std;
int main()
{
	int cel;
	float fh;
	cout<<"celcuis to farenheight "<<endl;
	for(cel=50;cel<=100;cel=cel+5)
	{
	fh=(cel*1.8)+32;
	cout<<cel<<"   "<<fh<<endl;
}
}
