#include <iostream>
using namespace  std;
int countsetbits(int s)
{
	int count=0;
	while(s)
	{
		s=s&s-1;
		count++;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int number;
	char ch;
	do
	{
		cout<<"Enter the testing  number"<<endl;
		cin>>number;
		int z;
		z=countsetbits(number);
		cout<<"number of set bits    "<<z<<endl;
		cout<<"Y to continue or rest to leave "<<endl;
				cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
	return 0;
}