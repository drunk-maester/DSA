#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	std::vector<char> v;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin>>ch;
		v.push_back(ch);
		/* code */
	}

	for (int i = 0; i < n/2; ++i)
	{
		char ch;
		ch=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=ch;
		/* code */
	}
	cout<<"reverse string is "<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i];
		/* code */
	}
	cout<<endl;

	return 0;
}