#include <bits/stdc++.h>

using namespace std;

int main () {

    int s, t, f; cin >> s >> t >> f;
    int p = s + t + f;
    p = (p > 24) ? p - 24 : p;
    p = (p < 0) ? p + 24 : p;

    cout << p << endl;

    return 0;
}
