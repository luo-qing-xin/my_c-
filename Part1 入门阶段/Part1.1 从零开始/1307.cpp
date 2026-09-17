//数字反转
#include <iostream>
using namespace std;
long long reverse(long long n)
{
    long long result = 0;
    if (n<0)
    {
        n = -n;
        while (n > 0)
        {
            result = result * 10 + n % 10;
            n /= 10;
        }
    return -result;
    }
    else
    {
        while (n > 0)
        {
            result = result * 10 + n % 10;
            n /= 10;
        }
        return result;
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}
