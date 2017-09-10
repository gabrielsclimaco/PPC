#include <bits/stdc++.h>

using namespace std;

int main () {

    double a, b, c;

    while (cin >> a >> b >> c, a != 0) {
        /* int x = (a*b)/(c/100); */
        int y = 0, i = 0;

        while (y <= a*b/(c/100)) {
            i++;
            y = i * i;
        }

        cout << i-1 << endl;
    }

    return 0;
}
