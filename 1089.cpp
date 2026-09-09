//模拟
#include<iostream>
using namespace std;
int main()
{
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }
    int store=0;
    int hand=0;
    for(int i=0;i<12;i++)
    {
        hand+=300;
        if(hand<arr[i])
        {
            cout<<-(i+1);
            return 0;
        }
        else
        {
            hand-=arr[i];
            if (hand>=100)
            {
                store+=hand/100;
                hand%=100;
            }
        }
    }
    cout<<store*120+hand;
    return 0;
}