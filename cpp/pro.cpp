#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
 std::vector<int> arr1;
 for(int i=0;i<20;i++)
 {int t;
	 cin>>t;
	 arr1.push_back(i);}
 
 for(int i=0;i<20;i++)
 cout<<arr1[i];
 }
