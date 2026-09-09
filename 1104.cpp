//struct+自定义排序
#include<iostream>
#include<algorithm>
using namespace std;
struct STUDENT
{
    string name;
    int year;
    int month;
    int day;
    int rank;
};
bool cmp(const STUDENT &a,const STUDENT &b)
{
    if (a.year!=b.year)
    {
        return a.year<b.year;
    }
    else if (a.month!=b.month)
    {
        return a.month<b.month;
    }
    else if (a.day!=b.day)
    {
        return a.day<b.day;
    }
    else
    {
        return a.rank>b.rank;
    }
}
int main()
{
    int n;
    cin>>n;
    STUDENT students[105];
    for (int i=0;i<n;i++)
    {
        cin>>students[i].name>>students[i].year
        >>students[i].month>>students[i].day;
        students[i].rank=i;
    }
    sort(students,students+n,cmp);
    for (int i=0;i<n;i++)
    {
        cout<<students[i].name<<endl;
    }
    return 0;
}