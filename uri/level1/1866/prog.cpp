#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y = 1; cin >> x;

        for (int j = 2; j <= x + 2; j++) {
            if (j % 2 == 0) y--;
            else y++;
        }

        cout << y << endl;
    }

    return 0;
}
