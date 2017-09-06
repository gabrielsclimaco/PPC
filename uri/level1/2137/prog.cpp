#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; string aux;

    while (scanf("%d", &n) != EOF) {
        string v[n];

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (stoi(v[i]) > stoi(v[j])) {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
            /* if (stoi(v[i]) > stoi(v[i+1])) { */
            /*     aux = v[i]; */
            /*     v[i] = v[i+1]; */
            /*     v[i+1] = aux; */
            /* } */
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << endl;
        }
    }

    return 0;
}
