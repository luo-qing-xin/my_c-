#include<iostream>
using namespace std;
#include<algorithm>
struct Student
{
    int id;
    int chinese;
    int math;
    int english;
    int score;
};
bool cmp(Student a, Student b)
{
    if (a.score != b.score)
    {
        return a.score > b.score;
    }
    else if(a.chinese != b.chinese)
    {
        return a.chinese > b.chinese;
    }
    else
    {
        return a.id < b.id;
    }
}
int main()
{
    int n;
    cin >> n;
    Student s[400];
    for (int i = 0; i < n; i++)
    {
        s[i].id = i + 1;
        cin  >> s[i].chinese >> s[i].math >> s[i].english;
        s[i].score = s[i].chinese + s[i].math + s[i].english;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < 5; i++)
    {
        cout << s[i].id << " " << s[i].score << endl;
    }
    return 0;
}