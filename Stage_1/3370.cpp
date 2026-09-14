//哈希
#include<iostream>
using namespace std;
#include<string>
#include<set>

int main()
{
    int n;cin>>n;
    set<string> s;
    for(int i=0;i<n;i++)
    {
        string str;cin>>str;
        s.insert(str);
    }
    cout<<s.size()<<endl;
    return 0;
}