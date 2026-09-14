//vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    while(1)
    {
        int n;cin>>n;
        if(n==0) break;
        v.push_back(n);
    }
    for(int i=int(v.size())-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}