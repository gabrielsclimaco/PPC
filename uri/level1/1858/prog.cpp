#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n; int menor = 99999999, x = 1;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < menor) {
            menor = a;
            x = i+1;
        }
    }

    cout << x << endl;

    return 0;
}
