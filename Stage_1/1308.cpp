//string
#include<iostream>
using namespace std;
#include<string>
#include<cctype>
//先把两个字符串都再前后添加一个空格，方便匹配完整的单词。
int main()
{
    string target;
    getline(cin,target);
    string str;
    getline(cin,str);
    for (int i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    for (int i=0;i<target.length();i++)
    {
        target[i]=tolower(target[i]);
    }
    str=" "+str+" ";
    target=" "+target+" ";
    int cnt=0;
    int pos=-1;
    int ans1=-1;
    //cout<<str<<endl<<target<<endl;
    while (true)
    {
        pos=str.find(target,pos+1);
        if (pos==-1)
        {
            break;
        }
        if (ans1==-1)
        {
            ans1=pos;
        }
        cnt++;
    }
    if (cnt==0)
    {
        cout<<ans1<<endl;
        return 0;
    }
    cout<<cnt<<" "<<ans1<<endl;
    return 0;
}