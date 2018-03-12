#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	long long arr[len];
	long long ar[1000000]={};
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
		ar[arr[i]]+=1;		
		/* code */
	}
//	std::map<key, value> map;
	std::map<long long,long long> map;
	for (int i = 0; i < len; ++i)
	{
		long long e1,e2;
		e1=arr[i]; e2=ar[arr[i]];
	map.insert(pair<long long,long long>(e2,e1));
	}
	std::map<long long, long long>::reverse_iterator it;
	it=map.rbegin();
	cout<<it->second;
	return 0;
}