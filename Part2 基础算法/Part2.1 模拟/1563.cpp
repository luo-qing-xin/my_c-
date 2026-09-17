//玩具谜题
//本质感觉像二进制
//可以去学习一下位运算

#include <iostream>
#include <string>
using namespace std;
struct toy
{
    //int num;
    int face;
    string name;
};
int main()
{
    int n,m;//n是小人个数，m是指令条数

    cin>>n>>m;
    toy toys[n];
    for(int i=0;i<n;i++)
    {
        cin>>toys[i].face>>toys[i].name;
        //toys[i].num=i+1;
    }
    int pos=0;
    for (int i=0;i<m;i++)
    {
        int a,s;
        cin>>a>>s;
        if((toys[pos].face+a)%2==0)//默认逆时针排，整除说明为00，11；
        //如果是00，11则顺时针移动s个位置
        {
            pos=(pos-s+n)%n;
        }
        else//如果是01，10则逆时针移动s个位置
        {
            pos=(pos+s)%n;
        }
    }
    cout<<toys[pos].name<<endl;
    return 0;
}
