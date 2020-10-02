#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string to reverse: ";
    cin >> s;
    int len = s.length();
    int n = len - 1, temp, j;
    j = (len ^ 1) ? n : len;
    for (int i = 0; i <= j / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - i];
        s[n - i] = temp;
    }
    cout << "\nReversed string: " << s;
    return 0;
}
