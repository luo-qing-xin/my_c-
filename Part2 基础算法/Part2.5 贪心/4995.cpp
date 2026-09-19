//跳跳！
//排序后贪心
//注意：使用ll:long long
//注意：循环不用这么麻烦，只需维护两个指针
/*
不难想到一个贪心：
从最左（初始点）跳到最右，再跳到第二左，再跳到第二右……以此类推。
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct STONE
{
    int high;
    int visited;
};
bool cmp(STONE a,STONE b)
{
    return a.high<b.high;
}//从小到大排序
bool allvisited(STONE stone[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(stone[i].visited==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;cin>>n;
    STONE stone[n];
    for(int i=0;i<n;i++)
    {
        cin>>stone[i].high;
        stone[i].visited=0;
    }
    sort(stone,stone+n,cmp);
    long long consume=stone[n-1].high*stone[n-1].high;
    int pos=n-1;
    int flog=0;
    //使用while循环，直到所有石头都被访问过
    stone[pos].visited=1;
    //cout<<consume<<endl;
    while(1)
    {
        if(flog==0)
        {
            for(int i=0;i<n;i++)
            {
                if(stone[i].visited==0)
                {
                    consume+=(stone[i].high-stone[pos].high)*(stone[i].high-stone[pos].high);
                    pos=i;
                    stone[i].visited=1;
                    flog=1;
                    //cout<<consume<<endl;
                    break;
                }
            }
            
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                if(stone[i].visited==0)
                {
                    consume+=(stone[i].high-stone[pos].high)*(stone[i].high-stone[pos].high);
                    pos=i;
                    stone[i].visited=1;
                    flog=0;
                    //cout<<consume<<endl;
                    break;
                }

            }
        }
        //判断是否都经过过
        if(allvisited(stone,n))
        {
            break;
        }
    }
    cout<<consume<<endl;
    return 0;
}
