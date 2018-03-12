#include <iostream>
using namespace  std;
void ChangeI(int i);
int main()
 {
int i=0;
ChangeI(i);
cout<<i<<endl;
}




void ChangeI(int i) {
i=10;
cout<<i<<endl;
}