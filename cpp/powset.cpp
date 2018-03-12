#include <iostream>
#include<math>
using namespace std;
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
		/* code */
	}

int j;
	for(int i = 0;i<pow(2,len)-1;i++)
	{
		j=i;
		
		while(j)
	{
		if(j&1)

		{
			cout<<arr[j];
		}
			j>>1;

cout<<"\n";
    }

	}


	return 0;
}