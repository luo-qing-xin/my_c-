//不高兴的津津
#include <iostream>
using namespace std;
int main()
{
    int time[7];
    for (int i=0;i<7;i++)
    {
        int a,b;
        cin>>a>>b;
        time[i]=a+b;
    }
    int max_time=time[0];
    int max_index=0;
    for (int i=1;i<7;i++)
    {
        if (time[i]>max_time)
        {
            max_time=time[i];
            max_index=i;
        }
    }
    if (max_time>8)
    {
        cout<<max_index+1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
