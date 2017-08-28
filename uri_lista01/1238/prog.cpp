#include <bits/stdc++.h>

using namespace std;

string getString (string a, string b) {
    string res = ""; int al = a.length(); int bl = b.length();

    for (int i = 0; i < (int) ((a.length() > b.length()) ? a.length() : b.length()); i++) {
        if (al == 0 || bl == 0) {
            al == 0 ? res += b.substr(i, b.length()) : res += a.substr(i, a.length());

            return res;
        }

        res += a[i];
        res += b[i];

        al--;
        bl--;
    }

    return res;
}

int main () {

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;

        cout << getString(a, b) << endl;
    }

    return 0;
}
