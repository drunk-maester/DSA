#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
char arr[]={'a','b','c','d'};
for (int i = 0; i < 4; ++i)
{
	cout<<arr[i]<<endl;
	/* code */
}
int n;
n=sizeof(arr)/sizeof(*arr);
cout<<"n="<<n;




				for (int i = 0; i < (1<<n); ++i)
				 {cout<<i<<"  ->  ";
							for (int j = 0; j <n; ++j)
							{
								if((i&(1<<j))>0)
									cout<<arr[j];
						    }
							cout<<endl;
				}




}