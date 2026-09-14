//冰雹猜想
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n != 1)
    {
        v.push_back(n);
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    v.push_back(1);
    for(int i=int(v.size())-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}