#include <bits/stdc++.h>

using namespace std;

int main () {

    long long int x; cin >> x;
    string a = to_string(x);

    reverse(a.begin(), a.end());

    cout << a << endl;

    return 0;
}
