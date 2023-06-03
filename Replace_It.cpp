#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string s;
        string x;
        cin >> s;
        cin >> x;
        int size = x.length();

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), size, "$");
        }

        cout << s << endl;
    }
    return 0;
}