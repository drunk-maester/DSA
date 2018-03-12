// array as parameter
#include<iostream>

using namespace std;
void print(int arr[])
{
for (int i = 0; i < 9; ++i)
{
	cout<<i+1<<"   ->  "<<arr[i]<<endl;
	/* code */
}
}
int main(int argc, char const *argv[])
{
	int arr[9]={};
	print(arr);	
	return 0;
}