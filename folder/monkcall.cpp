#include <iostream>
#include <vector>
using namespace  std;
int main(int argc, char const *argv[])
{
	int len,t,count=0;
	cin>>len;
	std::vector<int> v;
	std::vector<int> iv;
	for (int i = 0; i < len; ++i)
	{
		cin>>t;
		v.push_back(t);
		/* code */
	}
	for (int i = 0; i < len; ++i)
	{
		cin>>t;
		iv.push_back(i);
		/* code */
	}
	t=0;
	/*code*/
	while(t<len)

	{
		for (int i = 0; i < len; ++i)
		{
			if(v[i]==iv[j])
			{
				v[i]=-1;
				count++;
				j++;
				break;
			}
			count++;

			/* code */
		}
		j++;



	}
	cout<<count;

	return 0;
}