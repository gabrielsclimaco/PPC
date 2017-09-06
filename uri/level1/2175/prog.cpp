#include <bits/stdc++.h>

using namespace std;

int main () {

    double o, b, i; scanf("%lf %lf %lf", &o, &b, &i);

    if((o < b) && (o < i))
        cout << "Otavio" << endl;
    else if ((b < i) && (b < o))
        cout << "Bruno" << endl;
    else if ((i < b) && (i < o))
        cout << "Ian" << endl;
    else cout << "Empate" << endl;

    return 0;
}
