#include <bits/stdc++.h>
using namespace std;

void check(int a[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] == x)
        {
            cout << "\nThe pairs are " << a[i] << " and " << a[j] << endl;
            return;
        }
        else if (a[i] + a[j] < x)
            i++;
        else
            j--;
    }
    cout << "\nNo pair possible";
}

int main()
{
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "\nEnter the sum that two pair have: ";
    cin >> x;
    check(a, n, x);
    return 0;
}
