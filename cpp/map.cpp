/*#include <iostream>
#include <string>
#include <iterator>
#include<map>
using namespace  std;
int main(int argc, char const *argv[])
{
	int count=0;
	std::map<int, string> map;
	for (int i = 0; i < 5; ++i)
	{
	string st;
	int number;
	cin>>st;
	cin>>number;
	map.insert(pair<int,string>(number,st));
		/* code */
/*	}
//cout << "\tKEY\tELEMENT\n";
   
	std::map<int, string>:: reverse_iterator itr;
   for (itr = map.rbegin(); itr != map.rend(); ++itr)
// for (itr=map.begin();itr <= map.end(); ++itr)
	{
		cout<<itr->second<<endl;
		count++;
		if(count==3)
			break;
		/* code */
/*	}

	return 0;
}*/
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	std::map<int,string> map;
	for (int i = 0; i < len; ++i)
	{
	string st; int t;
	cin>>t;
	cin>>st;
	map.insert(pair<int,string>(t,st));
			/* code */
	}

	std::map<int,string> :: iterator it;
	for ( it = map.begin(); it != map.find(4); ++it)
	{

		cout<<it->first<<"  "<<it->second;
	}
	return 0;
}