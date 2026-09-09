//DFS+组合枚举
#include<iostream>
using namespace std;

int n,k;
int arr[25];
int sum=0;
void dfs(int start,int depth)
{
    for (int i=start;i<n;i++)
    {
        if (depth==k)
        {
            return;
        }
        else
        {
            sum+=arr[i];
            dfs(i+1,depth+1);
        }
    }
}
int main()
{
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dfs(0,1);




    return 0;

}