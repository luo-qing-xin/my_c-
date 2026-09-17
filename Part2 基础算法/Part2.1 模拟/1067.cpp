// 多项式输出
// 今天刚学了链表，感觉可以用链表做
//不用分成第一项、中间部分、最后一项来处理，直接用一个循环就可以了
//注意：没有x^1，而是x


/*
对于符号，除了第一项是正数外不输出符号，其余都输出。
对于系数，只要不为 0 就输出，需要特判 1 和 −1 的情况。
对于自变量 x，当系数和次数都不为 0 时输出。
对于次数，当次数大于 1 时输出。

所以只需考考虑四种情况！！！
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=n;i>=0;i--)
    {
        int a;
        cin >> a;
        if (a==0)
        {
            continue;
        }
        if (i!=n && a>0)
        {
            cout << "+";
        }
        if (abs(a)!=1 || i==0)
        {
            cout << a;
        }
        else if (a==-1)
        {
            cout << "-";
        }
        if (i>1)
        {
            cout << "x^" << i;
        }
        else if (i==1)
        {
            cout << "x";
        }
    }
    /*
    if (n==0)
    {
        int a;
        cin >> a;
        cout << a;
        return 0;
    }
    int a[110];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    if (a[0] != 0)
    {
        if (abs(a[0]) != 1)
        {
            cout << a[0] << "x^" << n;
        }
        else
        {
            if (a[0] == -1)
            {
                cout << "-x^" << n;
            }
            else
            {
                cout << "x^" << n;
            }
        }
    } // 第一项特殊处理

    for (int i = 1; i < n; i++)
    {

        if (a[i] == 0)
        {
            continue;
        }
        else
        {
            if (a[i] > 0)
            {
                cout << "+";
            }
            if (abs(a[i]) != 1)
            {
                cout << a[i] << "x^" << n - i;
            }
            else
            {
                if (a[i] == -1)
                {
                    cout << "-x^" << n - i;
                }
                else
                {
                    cout << "x^" << n - i;
                }
            }
        } // 其他项
    }
    if (a[n] == 0)
    {
        return 0;
    }
    if (a[n] > 0)
    {
        cout << "+" << a[n];
    }
    else
    {
        cout << a[n];
    }//最后一项
    */
    return 0;
}
