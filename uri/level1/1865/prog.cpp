#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string s; int x; cin >> s >> x;

        if (s == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
