#include <bits/stdc++.h>

using namespace std;

vector<int> getArray (int x) {
    vector<int> r;

    r.push_back(0);

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            r.push_back(i);
        }
    }

    return r;
}

int main () {

    int n, i = 1;

    while (cin >> n) {

        vector<int> v = getArray(n);

        cout << "Caso " << i << ": " << v.size() << " numero" << ((v.size() > 1) ? "s" : "") << endl;

        for (int j = 0; j < (int) v.size(); j++) {
            cout << v.at(j) << ((j + 1 == (int) v.size()) ? "" : " ");
        }

        cout << endl << endl;

        i++;
    }

    return 0;
}
