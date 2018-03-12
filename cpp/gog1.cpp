#include <iostream>
#define TC int t; cin>>t; while(t--)

using namespace std;
  int count_one (int n)
        {
            int count=0;
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
    }
int main() {
TC
{
    int n;
    int flag=0;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i+count_one(i)==n)
        {flag=1;break;}
        
    }
    if(flag)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    
}

}