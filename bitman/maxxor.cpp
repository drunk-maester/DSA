#include<iostream>
using namespace std;
int maxxor(int arr[],int len)
{
	int max_xor=0;
	for (int i = 0; i < (1<<len); ++i)
	{	int curr_xor=0;
		for (int j = 0; j< len; ++j)
		{
			if (i&(1<<j))
			{	
				curr_xor=curr_xor^arr[j];
			}			
		}
		if(curr_xor>max_xor)
			max_xor=curr_xor;
	}
	return max_xor;
} 
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
	}
	cout<<maxxor(arr,len);

	return 0;
}