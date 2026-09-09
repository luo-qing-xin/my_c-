//DFS+组合枚举
//还是不太熟练
#include<iostream>
using namespace std;

int n,k;
int arr[25];
int ans=0;
bool isprime(int x)
{
    if (x<2) return false;
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
void dfs(int start,int depth,int sum)//depth是已经选了多少个数，sum是已经选的数的和
{
    if(depth==k)
    {
        if (isprime(sum))
        {
            ans++;
        }
        return;
    }
    for (int i=start;i<n;i++)
    {
        dfs(i+1,depth+1,sum+arr[i]);
    }
    return;
}
int main()
{
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dfs(0,0,0);
    cout<<ans<<endl;
    return 0;

}