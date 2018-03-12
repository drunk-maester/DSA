#include<iostream>
using namespace std;
int search(int [],int,int);
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
	}int key;
	cout<<"search for "<<endl;
	cin>>key;
	int q=search(arr,key,len);
	if(q)
		cout<<"element found at post    ->  " <<q<<endl;
	else
		cout<<"elemnt not found  !!         "<<endl;
	return 0;
}
int search(int arr[],int key,int len)
{
	for (int i = 0; i < len;i++)
	{
		if(arr[i]==key)
			return (i+1);
	}
	return 0;
}
