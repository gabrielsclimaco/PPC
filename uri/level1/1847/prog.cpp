#include <bits/stdc++.h>

using namespace std;

int main () {

    int a,b,c; cin >> a >> b >> c;

    cout << ":";

    if ((a > b && c >= b) || (a < b && (c-b >= b-a)) || (a > b && (b-c < a-b)) || (a == b && c > b)) {
        cout << ")" << endl;
    } else {
        cout << "(" << endl;
    }

    return 0;
}
