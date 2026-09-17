//计数问题
#include <iostream>
using namespace std;
int myfind(int n,int x)
{
    int count=0;
    while(n)
    {
        if (n%10==x)
        {
            count++;
        }
        n/=10;
    }
    return count;
}
int main()
{
    int n,x;cin>>n>>x;
    int count=0;
    //cout<<myfind(11,1)<<endl;
    for (int i=1;i<=n;i++)
    {
        count+=myfind(i,x);
    }
    cout<<count<<endl;
    return 0;
}
