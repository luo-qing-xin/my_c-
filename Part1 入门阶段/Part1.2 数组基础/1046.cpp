//数组、遍历
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int h;
    cin>>h;
    //输入
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] <=h+30)
        {
            sum++;
        }
    }
    cout<<sum;

    return 0;
}