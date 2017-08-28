#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;

    while (t != 0) {

        for (int i = 0; i < t; i++) {
            int x; cin >> x;

            int y = x % 2 == 0 ? ((x - 2) * 2 + 2) : ((x - 1) * 2 + 1);

            cout << y << endl;
        }

        cin >> t;
    }

    return 0;
}
