//买铅笔
#include <iostream>
using namespace std;
struct pen
{
    int num;
    int price;
    int total;
};
int main()
{
    int n;
    cin >> n;
    pen p[3];
    for (int i = 0; i < 3; i++)
    {
        cin>> p[i].num >> p[i].price;
        int count_pen;
        if (n%p[i].num == 0)
        {
            count_pen= n/p[i].num;
        }
        else
        {
            count_pen= n/p[i].num+1;

        }
        p[i].total= count_pen*p[i].price;
    }
    int min_total= p[0].total;
    for (int i = 1; i < 3; i++)
    {
        if (p[i].total<min_total)
        {
            min_total= p[i].total;
        }   
    }
    cout<<min_total<<endl;
    return 0;
}
