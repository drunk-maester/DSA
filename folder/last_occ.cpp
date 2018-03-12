#include <iostream>
#define TC int tc; cin>>tc; while(tc--)
using namespace  std;
int main(int argc, char const *argv[])
{
TC	
{
	long long   len;
	cin>>len;

	long long arr1[len];
	long long arr2[99999]={};

	for (int i = 0; i < len; ++i)
	{
		cin>>arr1[i];
		arr2[arr1[i]]=i+1;
		/* code */
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		if(arr2[x])
		cout<<arr2[x]<<endl;
	else
		cout<<"-1"<<endl;
	}
} 
	return 0;
}