#include <iostream>
using  namespace  std;
int main(int argc, char const *argv[])
{
	int row,column,**pointer;
	cin>>row>>column;
	pointer=new(nothrow) int*[row];
	for (int i = 0; i < row; ++i)
		pointer[i]=new(nothrow) int[column];

	for (int i = 0; i <row; ++i)
	{
		for (int j = 0; j < column; ++j)

		{
			cin>>pointer[i][j];
			/* code */
		}
		/* code */
	}

	for (int i = 0; i <row; ++i)
	{
		for (int j = 0; j < column; ++j)

		{
		cout<<pointer[i][j]<<" "	;		/* code */
		}
		cout<<endl;

		/* code */
	}


		for (int i = 0; i < row; ++i)
		delete [] pointer[i];
	delete [] pointer;


	return 0;
}