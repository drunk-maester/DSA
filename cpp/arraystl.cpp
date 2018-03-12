/*// vector::emplace
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {10,20,30};

  auto it = myvector.emplace ( myvector.begin()+1, 100 );
  myvector.emplace ( it, 200 );
  myvector.emplace ( myvector.end(), 300 );

  std::cout << "myvector contains:";
  for (auto& x: myvector)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}*/
#include <iostream>
#include<iterator>
#include <vector>
using namespace  std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
	
	v.push_back(10*(i+1));
	//*code *
	}
	//v.insert(40,999);
	//cout<<v.size()<<endl;
//	v.assign(10,100);

//  int z = v.emplace ( v.begin()+1, 99 );
 // v.emplace ( z,678 );
	//v.emplace(v.begin+6,667);
	vector<int> ::iterator it;
for (it=v.begin();it<v.end();++it)

{
	cout<<*it<<endl;

}
cout<<v.max_size()<<endl<<v.capacity();


	return 0;
}

