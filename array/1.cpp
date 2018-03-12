#include<iostream>
using namespace std;

int count1(int n)
{
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
 int main()
 {
 	int arr[]={1,2,3,4,5};
 	int len=sizeof(arr)/sizeof(*arr);
 	cout<<"power set"<<endl;
 	for (int i = 0; i < (1<<len); ++i)
 	{
 	//	cout<<i<<" ->   ";
 		for (int j = 0; j < len; ++j)
 		{
 			if(((i&(1<<j))>0)&&(count1(i)==4))
 			cout<<arr[j]<<" ";

 		}

 		cout<<endl;

 	}
 }