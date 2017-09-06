#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;

        for (int j = stoi(a); j <= stoi(b); j++) {
            printf("%d", j);
        }

        for (int j = stoi(b); j >= stoi(a); j--) {
            string s = to_string(j);
            reverse(s.begin(), s.end());
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
