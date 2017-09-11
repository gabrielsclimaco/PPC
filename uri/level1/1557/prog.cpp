#include <bits/stdc++.h>

using namespace std;

int getdig(int n) {
    int q_digitos = 0;

    while(n) {
        n /= 10;
        q_digitos++;
    }
    return q_digitos;
}

int main () {

    int n;

    while (1) {
        cin >> n;

        if (n == 0) break;
        if (n == 1) cout << 1 << endl;
        else {
            int maior = pow(4, n-1);
            int digitos = getdig(maior);
            int l = pow(2, n-1);

            for (int i = 1; i <= l; i*=2) {
                int limite = i * pow(2, n-1);
                /* cout << "opa" << endl; */
                printf("%*d", digitos, i);

                for (int j = i*2; j <= limite; j*=2) {
                    /* cout << i << "-" << j << endl; */
                    printf(" %*d", digitos, j);
                }

                cout << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
