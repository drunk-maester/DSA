//bubble sort
//swaping adjacent elements if they are in wrong order
#include<iostream>
using namespace  std;
int main(int argc, char const *argv[])
{
	int len;
	cout<<"enter length of array"<<endl;
	cin>>len;	
	int arr[len];
	for (int i = 0; i < len; ++i)
	{ cin>>arr[i]; }
		//algo
		for (int i = 0; i < len-1; ++i)
			{
				for (int j = 0; j < len-1-i; ++j)
				{
					if(arr[j]>arr[j+1])
					{
						int temp;
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
	//display
	for (int i = 0; i < len; ++i)
				{
				cout<<arr[i]<<endl;	
				}			
	return 0;
}