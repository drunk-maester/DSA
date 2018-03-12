#include <iostream>
using  namespace  std;
int main(int argc, char const *argv[])
{
	int n,*pointer;

	cin>>n;
	pointer=new(nothrow) int [n];
	for (int i = 0; i < n; ++i)
	{
		cin>>pointer[i];
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<pointer[i];
		/* code */
	}
	delete[] pointer;


		return 0;
}