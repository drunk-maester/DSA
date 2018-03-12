#include<iostream>
	using namespace std;
	int main()
	{
	int len,query;
	cin>>len>>query;
	int arr[len],l,r,flip,type;
	for(int i=0;i<len;i++)
		cin>>arr[i];
	while(query--){
	cin>>type;
	if(type)
	{ 
		cin>>flip; 
		if(arr[flip-1])
		 arr[flip-1]=0; 
		else 
			arr[flip-1]=1;
			 }	
	else
	{	cin>>l>>r;
		if(arr[r-1]==1)
		cout<<"ODD"<<endl;
		else
		cout<<"EVEN"<<endl;	

	}
	}//end of query
	 return 0;
	 }