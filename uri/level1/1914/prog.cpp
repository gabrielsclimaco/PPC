#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string a, ax, b, bx; cin >> a >> ax >> b >> bx; int n, m; cin >> n >> m;

        if ((n+m) % 2 == 0) {
            if (ax == "PAR") cout << a << endl;
            else cout << b << endl;
        } else {
            if (bx == "IMPAR") cout << b << endl;
            else cout << a << endl;
        }

    }

    return 0;
}
