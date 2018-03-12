#include <iostream>
#define TC int t; cin>>t; while(t--)
using namespace  std;
int main(int argc, char const *argv[])
{
	TC
	{
		long long min,ul,num,count=0;
		cin>>num;
		int a,b,c;
		cin>>a>>b>>c;
		if((a<b)&&(a<c))
			min=a;
		else
		{
			if((b<c)&&(b<a))
				min=b;
			else
				min=c;
		}
		ul=num;
		while(ul)
			{
				if((ul%a==0)||(ul%b==0)||(ul%c==0))
					break;
				ul--;

			}
		while(ul>=min)
		{
			if((num%a==0)||(num%b==0)||(num%c==0))
				count++;
		ul-;
		}
		cout<<count;

	}
	
	return 0;
}