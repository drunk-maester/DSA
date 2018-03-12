#include <iostream>
using namespace  std;
int powerof2(int x)
{
	/*if(x==0)
		return 0;
	else
	{
		while(x%2==0)
		x=x/2;
		return(x==1);
	}*/
	return(x&&!(x&(x-1)));
}
int main(int argc, char const *argv[])
{
	int number;
	char ch;
	do
	{
		cout<<"Enter the testing  number"<<endl;
		cin>>number;
		if(powerof2(number))
		cout<<number<<" is in power of 2"<<endl;
		else
		cout<<number<<" is not in  power of 2"<<endl;
		cout<<"Y to continue or press the alter key to leave"<<endl;
				cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
}