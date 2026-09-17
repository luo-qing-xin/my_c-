//铺地毯
//思路二：后放的地毯在先放的地毯上，和栈的思路差不多
/*
使用n^2会超空间，一个 int 通常占：4Bytes
所以总空间：
10^8*4 Bytes，也就是接近 400 MB。
*/
#include <iostream>
using namespace std;
struct carpet
{
    int a,b;
    int l_x,l_y;
};
//使用四个数组或者结构体都可以
bool isin(int x,int y,carpet c)//判断点是否在地毯内
{
    if(x>=c.a&&y>=c.b&&x<=c.a+c.l_x&&y<=c.b+c.l_y)
        return true;
    return false;
}
int main()
{
    int n;cin>>n;
    carpet c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i].a>>c[i].b>>c[i].l_x>>c[i].l_y;
    }
    int x,y;
    cin>>x>>y;
    for(int i=n-1;i>=0;i--)
    {
        if(isin(x,y,c[i]))
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}



/*
栈的代码
#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int sx,sy,ex,ey;
};
stack<node>s;
int mx,my;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	while(n--){
		int x,y,g,k;
		cin>>x>>y>>g>>k;
		s.push({x,y,x+g,y+k});
	}
	cin>>mx>>my;
	while(!s.empty()){
		node t=s.top();
		if(t.sx<=mx&&t.ex>=mx&&t.sy<=my&&t.ey>=my){
			cout<<s.size();
			return 0;
		}
		s.pop();
	}
	cout<<-1;
	return 0;
}

*/