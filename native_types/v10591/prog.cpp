#include <bits/stdc++.h>

using namespace std;

bool ishappy (int x) {
    int y = x;

    do {
        int p = (int) log10(x);
        int sum = 0;

        int t = x;
        for (int i = p; i >= 0; i--) {
            sum += pow((t / pow(10, i)), 2);
            t = t - ((t / pow(10, i)) * pow(10, i));
        }

        x = sum;
        if (x == y) {
            return false;
        }
    } while (x != 1);

    return true;
}

int main () {

    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        if (ishappy(x)) {
            cout << "Case #" << i << ": " << x << " is a Happy number." << endl;
        } else {
            cout << "Case #" << i << ": " << x << " is an Unhappy number." << endl;
        }
    }

    return 0;
}
