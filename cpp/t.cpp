#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	std::vector<int> K;
	std::vector<int> D;
	int n; cin>>n;
	for (int i = 0; i < n; ++i)
	{
		char ch;
		cin>>ch;
		if(ch=='K')
			K.push_back(i);
		else
			D.push_back(i);

		/* code */
	}
	int k=K.size();
	int d=D.size();
	sort(K.begin(),K.end());


	return 0;
}
