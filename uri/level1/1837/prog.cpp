#include <bits/stdc++.h>

using namespace std;

int main () {

    int a, b, q, r; cin >> a >> b;

    if (a < 0) {
        int x = (b < 0 ? b * -1 : b);
        for (r = 0; r < x; r++) {
            if ((a-r) % b == 0) {
                break;
            }
        }

        q = (a - r) / b;
    } else {
        q = a/b;
        r = a % b;
    }

    cout << q << " " << r << endl;

    return 0;
}
