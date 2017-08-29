#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;

    while (cin >> n) {
        int b = n / 3;
        int w = n - b * 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j && (i + j == n - 1)) {
                    cout << 4;
                } else if (i == j && !((i >= b && i < b + w) && (j >= b && j < b + w))) {
                    cout << 2;
                } else if ((i + j == n - 1) && !((i >= b && i < b + w) && (j >= b && j < b + w))) {
                    cout << 3;
                } else if ((i >= b && i < b + w) && (j >= b && j < b + w)) {
                    cout << 1;
                } else {
                    cout << 0;
                }

                if (j == n - 1) {
                    cout << endl;
                }
            }
        }

        cout << endl;
    }

    return 0;
}
