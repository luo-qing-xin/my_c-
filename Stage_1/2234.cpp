//注意：要存原始值，不能只存绝对值
#include<iostream>
using namespace std;
#include<set>
#include<algorithm>
int main()
{
    set<int> s;
    int n;cin>>n;
    int sum;cin>>sum;
    s.insert(sum);
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        if(s.find(x) != s.end())//找到
        {
            continue;
        }
        else
        {
            s.insert(x);
            auto left = s.lower_bound(x);
            if (left!=s.begin())
            {
                --left;
                if(s.upper_bound(x)!=s.end())
                {
                    sum+=min(x-*left,*s.upper_bound(x)-x);
                }
                else
                {
                    sum+=x-*left;
                }
            }
            //如果是最左边，就一定有比他大的
            else
            {
                sum+=*s.upper_bound(x)-x;
            }
            //cout<<"第"<<i<<"次sum="<<sum<<endl;
        }
    }
    cout<<sum<<endl;

    return 0;
}