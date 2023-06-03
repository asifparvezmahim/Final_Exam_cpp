#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Ratul")
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}