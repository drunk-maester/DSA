#include<iostream>
using namespace  std;
int main(int argc, char const *argv[])
{

				int arr[2][2];
			

			
					
			for(int i=0;i<2;i++)
			{
			for (int j = 0; j < 2; j++)
				{
					cin>>arr[i][j];
				}	
			}


for(int i=0;i<2;i++)
			{
			for (int j = 0; j < 2; j++)
				{
					cout<<   *(*(arr+i)+j) ;
					cout<<endl;
				}	
			}




	/* code */
	return 0;
}
