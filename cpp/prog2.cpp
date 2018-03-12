
#include<bits/stdc++.h>
#define TQ int q;cin>>q;while(q--)
using namespace std;
int  printfrequency(int arr[],int n,int t)
{
    int l;
    for (int j =0; j<n; j++)
        arr[j] = arr[j]-1;
 
    for (int i=0; i<n; i++)
        arr[arr[i]%n] = arr[arr[i]%n] + n;
    l=arr[t];
return l;
    
}
int main()
{
    int len; cin>>len; int arr[len];
    for(int i=0;i<len;i++)
    cin>>arr[i];
    sort(arr,arr+len);
TQ
{
    int z=0,el;
    cin>>el;
    z=printfrequency(arr,len,el);
    if(z)
    cout<<z<<endl;
    else
    cout<<"NOT PRESENT"<<endl;
}   
return 0;   
}
