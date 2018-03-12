#include<iostream>
using namespace  std;
int main(int argc, char const *argv[])
{
	int a,b,c,x=0,y=0;
	bool flag=false;
	cin>>a>>b>>c;
if((b-a)%c==0)
flag=true;	
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}