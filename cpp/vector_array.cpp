#include<iostream>
#include<vector>
using namespace  std;
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		//int t;
		//cin>>t;
		v.push_back(i*10);
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<" ";
		/* code */
	}


	cout<<"\n";
	cout<<"1. size() – Returns the number of elements in the vector                          "<<v.size()<<endl;
	cout<<"2. max_size() – Returns the maximum number of elements that the vector can hold   "<<v.max_size()<<endl;
	cout<<"3. capacity() – Returns the size of the storage space currently allocated to the\n vector expressed as number of elements   "<<v.capacity() <<endl;
	cout<<"4. empty() – Returns whether the container is empty"<<v.empty() <<endl;



	return 0;
}