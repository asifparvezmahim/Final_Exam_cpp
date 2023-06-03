#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int math_marks;
    int english_marks;
};

int main()
{
    int size;
    cin >> size;
    Student a[size];

    for (int i = 0; i < size; i++)
    {

        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].math_marks >> a[i].english_marks;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }
    return 0;
}