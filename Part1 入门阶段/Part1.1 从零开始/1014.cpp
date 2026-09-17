//Cantor表
//模拟题：观察到第i行，第j列为i/j;
//第k条斜线上有k个元素，
//再利用等差数列的性质来完成，注意不要用简单的加法（1+2+...+k）

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    /*
    int sum=0;
    int i=0;
    while(sum<=n)
    {
        i++;
        sum+=i;
    }
    cout<<sum<<" " <<i<<" ";
    当时在尝试用加法解决
    */
    int k=1;
    while(k*(k+1)/2<n)
    {
        k++;
    }
    int before=k*(k-1)/2;
    int pos=n-before;
    if(k%2==0)
    {
        cout<<pos<<"/"<<k-pos+1<<endl;
    }
    else
    {
        cout<<k-pos+1<<"/"<<pos<<endl;  
    }
    return 0;
}
