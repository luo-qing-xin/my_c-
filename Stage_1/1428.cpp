//枚举
#include<iostream>
using namespace std;
int main()
{
    int n;//鱼的数量
    cin >> n;
    int a[110];//鱼的可爱程度
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans[110];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                sum++;
            }
        }
        ans[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}