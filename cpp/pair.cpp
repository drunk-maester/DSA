#include <iostream>
#include<utility>
#include<string>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	pair <int,double> p[5];
	for (int i = 0; i < 5; ++i)
	{
		int roll;double per;
		cin>>roll>>per;
		roll=15500+roll;
		p[i]=make_pair(roll,per);


		/* code */
	}
	cout<<endl;
	cout<<"******************************************"<<endl;
	sort(p.second,0,5);
	for (int i = 0; i < 5; ++i)
	{
		cout<<p[i].first<<"    "<<p[i].second<<endl;

		/* code */
	}
	return 0;
}