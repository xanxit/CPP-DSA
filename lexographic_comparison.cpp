#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c = 0;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
		b[i] = toupper(b[i]);
		if (char(a[i]) == char(b[i])) {
			c += 1;
		}
		if (char(a[i]) > char(b[i])) {
			cout << "1" << endl;
			break;
		}
		if (char(a[i]) < char(b[i])) {
			cout << "-1" << endl;
			break;
		}
	}
	if (c == a.length()) {
		cout << "0" << endl;
	}
}
