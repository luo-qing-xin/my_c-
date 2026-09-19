//纪念品分组
//贪心算法并不难，难的是证明。
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int w;cin>>w;
    int n;cin>>n;
    int a[n];
    int visited[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        visited[i]=0;
    }
    sort(a,a+n);
    //能不能使用双指针,因为看到是每组最多两个
    //我是神，这个就是用双指针做
    int left=0,right=n-1;
    int count=0;
    while(left<=right)
    {
        if(a[left]+a[right]<=w)
        {
            left++;
            right--;
            count++;
        }
        else
        {
            right--;
            count++;
        }
    }
    cout<<count<<endl;
    /*
    int rest=w;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(rest>=a[i])
        {
            rest-=a[i];
        }
        else
        {
            count++;
            rest=w-a[i];
        }
        
    }
    count++;
    cout<<count<<endl;
    */
    return 0;
}
