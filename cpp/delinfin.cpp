#include <iostream>
#include<iterator>
#include<string>
#include <map>
#define Query int q; cin>>q; while(q--)
using namespace std;
int main(int argc, char const *argv[])
{
	std::map<int, string> map;
	int n,ded;
	string st;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>ded;
		cin>>st;
		
		map.insert(pair<int,string>(ded,st));


		/* code */
	}
	Query
	{int t;
	cin>>t;
	std::map<int,string>:: iterator it;
	for (it=map.begin();it!=map.end();++it)
	{
		if(it->first==t)
		{
			cout<<it->second<<endl;
			break;
		}
		/* code */
	}

	}
	return 0;
}