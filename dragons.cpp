
#include <iostream>

using namespace std;

int main()
{
    long s,n;
    
    cin>>s>>n;
    
    int flag=0;
    for(int i=0;i<n;i++)
    {
        long x;
    long y;
    cin>>x>>y;
    if(s>x)
    {s=s+y; flag=0;}
    else
    {
        flag=1;
    }
    }
    
    
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
