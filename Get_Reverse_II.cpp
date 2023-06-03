#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n, i, j;
    cin >> n;
    Student array[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i].nm >> array[i].cls >> array[i].s >> array[i].id;
    }

    // operations
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(array[i].id, array[j].id);
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i].nm << " " << array[i].cls << " " << array[i].s << " " << array[i].id << endl;
    }
    return 0;
}