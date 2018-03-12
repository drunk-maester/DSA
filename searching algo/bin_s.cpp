//binary search
#include<iostream>
using namespace std;
int bin_search(int [],int,int,int);
int main(int argc, char const *argv[])
{
	int arr[10];
	for (int i = 0; i < 10; ++i)
	{
		arr[i]=i+1;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout<<arr[i]<<endl;
	}
	int key,len;
	cout<<"searching  for "<<endl;
	cin>>key;
	len=sizeof(arr)/sizeof(arr[0]);
	int q=bin_search(arr,0,len-1,key);
	if(q)
		cout<<"element found at post    ->  " <<q<<endl;
	else
		cout<<"elemnt not found  !!         "<<endl;
	return 0;
	return 0;
}
int bin_search(int arr[],int left,int right,int key)
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]==key)
			return mid+1;
		if (arr[mid]<key)
		{
			left=mid+1;
			/* code */
		}
		else
			right=mid-1;
	}
	return 0;
}
