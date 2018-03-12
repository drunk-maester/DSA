#incude<iostream>
#incude<map>
#incude<string>
#incude<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	std::map<int,string> map;
	int len;
	for (int i = 0; i < len; ++i)
	{
		int num;string st;
		cin>>num;
		cin>>st;
		map.insert(pair<int,string>(num.st));
		/* code */
	}
	std::map<int,string>:: iterator it;
	for (it = map.begin();it!= map.end();++it)
	{
		cout<<it->first<<" "<<it->second;
		/* code */
	}

	return 0;
}