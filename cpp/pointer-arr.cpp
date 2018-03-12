#include <iostream>
using  namespace  std;
int main(int argc, char const *argv[])
{
	int arr[10];
	for(int i=0;i<10;i++)
		cin>>arr[i];

	cout<<"printing arr by index \n";
			for(int i=0;i<10;i++)
			cout<<arr[i]<<endl;

int *ptr;
ptr=arr;
cout<<"printing arr with the help of pointer\n";
		for(int i=0;i<10;i++)
	{
		cout<<*ptr<<endl;
		
		ptr++;
	}

	/* code */
	return 0;
}

