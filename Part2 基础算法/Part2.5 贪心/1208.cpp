//[USACO1.3]Mixing Milk
//注意：排序函数得写<algorithm>
//也可以不用排序，每一次都找最便宜的牛奶，
//然后把已选牛奶的价格提到1010（因为所有数据<1000）
//或者使用visited数组也可以
#include <iostream>
#include<algorithm>
using namespace std;
struct MILK
{
    int price;
    int amount;
};
bool cmp(MILK a,MILK b)
{
    return a.price<b.price;
}
int main()
{
    int n,m;
    int total=0;
    cin>>n>>m;
    MILK milk[m];
    for(int i=0;i<m;i++)
    {
        cin>>milk[i].price>>milk[i].amount;
    }
    sort(milk,milk+m,cmp);

    //如果n>milk[0].amount,则需要继续往下找
    //如果小于等于，就停止循环
    for(int i=0;i<m;i++)
    {
        if(n>milk[i].amount)
        {
            n-=milk[i].amount;
            total+=milk[i].price*milk[i].amount;
        }
        else
        {
            total+=milk[i].price*n;
            break;
        }
    }
    cout<<total<<endl;
    return 0;
}
