//集合
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    for (int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        if (s.find(m)==s.end())//没找到
        {
            s.insert(m);
        }
    }
    cout<<s.size()<<endl;
    for (int x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}