#include <iostream>
using namespace  std;
int main(int argc, char const *argv[])
{
	int len,k,loop;
	cin>>len>>k;
	long long arr[len],max;
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
	}
	int j=0;
	loop=len-k+1;
	while(loop--)
	{
		max=arr[j];

		for (int i = j; i < j+k; ++i)
		{
			if(arr[i]>max)
			max=arr[i];
			/* code */
		}
		cout<<max<<" ";
		j++;
	}
	return 0;
}		