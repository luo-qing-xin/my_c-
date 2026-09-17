//生活大爆炸版石头剪刀布
//就是定义关系矩阵（打表）+模运算
//思路二：使用递归
#include <iostream>
using namespace std;
int main()
{
    //定义胜负关系矩阵
    int map[5][5]={ {0,0,1,1,0},
                    {1,0,0,1,0},
                    {0,1,0,0,1},
                    {0,0,1,0,1},
                    {1,1,0,0,0}};
    int n,na,nb;
    cin>>n>>na>>nb;
    int a[200],b[200];
    for(int i=0;i<na;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<nb;i++)
    {
        cin>>b[i];
    }
    int winA=0,winB=0;
    for(int i=0;i<n;i++)
    {
        if(a[i%na]==b[i%nb])
        {
            continue;
        }
        if(map[a[i%na]][b[i%nb]]==1)
        {
            winA++;
        }
        else
        {
            winB++;
        }
    }
    cout<<winA<<" "<<winB<<endl;
    return 0;
}


/*
递归
#include<bits/stdc++.h>
using namespace std;
int n,na,nb,sa,sb,fa[201],fb[201];//看到sb不要想歪，这是score of b的缩写。
inline void pk(int a,int b,int &s1,int &s2){
	if(a==b) return;//如果甲和乙出的一样，直接返回。
	if(a>b){//假如甲出的代号比乙的大，就递归解决，之后就可以只枚举一半
		pk(b,a,s2,s1);
		return;
	}
	switch(a){
		case 0:++(b==2||b==3?s1:s2);return;//等同于if(b==2||b==3) ++s1;else ++s2;return;下同
		case 1:++(b==3?s1:s2);return;
		case 2:++(b==4?s1:s2);return;
		case 3:++s1;return;
	}
}
int main(){
	scanf("%d%d%d",&n,&na,&nb);
	for(int i=0;i<na;++i)//下标从0开始，方便等下取模
		scanf("%d",fa+i);
	for(int i=0;i<nb;++i)
		scanf("%d",fb+i);
	for(int i=0;i<n;++i)
		pk(fa[i%na],fb[i%nb],sa,sb);
	printf("%d %d",sa,sb);//输出甲和乙的得分
	return 0;
}
*/
