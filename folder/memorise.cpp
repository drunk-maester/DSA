#include <bits/stdc++.h>
#define TC int t; cin>>t; while(t--)
using namespace  std;
int main(int argc, char const *argv[])
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
TC
{
	int  len;
	cin>>len;

	long long arr1[len];
	long long arr2[100000]={};

	for (int i = 0; i < len; ++i)
	{
		cin>>arr1[i];
		arr2[arr1[i]]+=1;
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
		cout<<"NOT PRESENT"<<endl;
	}
/*code*/




}	
	
	return 0;
}