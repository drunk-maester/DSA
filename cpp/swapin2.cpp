#include <iostream>
using  namespace std;
int main(int argc, char const *argv[])
{

	int x,y;
	cin>>x>>y;
	cout<<"\n";
	cout<<"value of x ="<<x<<"\n";
	cout<<"value of y ="<<y<<"\n";

	x=x^y;
	y=x^y;
	x=x^y;
	cout	<<"after swap"<<endl;
	cout<<"value of x ="<<x<<"\n";
	cout<<"value of y ="<<y<<"\n";


return 0;
}

