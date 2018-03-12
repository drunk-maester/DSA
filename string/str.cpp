#include<iostream>
#include<string>
using namespace std;
int main()
{
	string st;
	getline(cin,st);
	//cout<<""<<endl;
	cout<<"push_back"<<endl;
	st.push_back('x');
	cout<<endl<<st;
	//resize function
	st.resize(7);
	cout<<"resize function"<<endl;
	cout<<endl<<st;
//length function;
cout<<endl<<"length ==="<<st.length();	


}