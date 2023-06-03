#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int size, i, j;
    cin >> size;
    Student array[size];

    for (i = 0; i < size; i++)
    {
        cin >> array[i].nm >> array[i].cls >> array[i].s >> array[i].id >> array[i].math_marks >> array[i].eng_marks;
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if ((array[i].math_marks + array[i].eng_marks) < (array[j].math_marks + array[j].eng_marks))
            {
                swap(array[i], array[j]);
            }

            else if ((array[i].math_marks + array[i].eng_marks) == (array[j].math_marks + array[j].eng_marks))
            {
                if (array[i].id > array[j].id)
                {
                    swap(array[i], array[j]);
                }
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        cout << array[i].nm << " " << array[i].cls << " " << array[i].s << " " << array[i].id << " " << array[i].math_marks << " " << array[i].eng_marks << endl;
    }
    return 0;
}