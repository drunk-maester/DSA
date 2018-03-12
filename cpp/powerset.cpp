#include <iostream>
using namespace  std;
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

	for (int i = 0; i <( 1<<len); ++i)

	{
		cout<<i+1<< "subset       ::";
			for (int j = 0; j <len; ++j)
			{
				if(i&(1<<j))
					cout<<arr[j]<<"  ";

				/* code */
			}
			cout<<endl;



	}
	
	

	return 0;
}							