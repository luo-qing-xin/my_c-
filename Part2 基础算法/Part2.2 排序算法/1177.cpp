//sort排序
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long num[100005];
    cin>>n;
    for (int i=0;i<=n-1;i++)
    {
        cin>>num[i];
    }
    sort(num,num+n);
    for (int i=0;i<=n-1;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}