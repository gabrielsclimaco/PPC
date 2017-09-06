#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;

    while (scanf("%d", &n) != EOF) {
        double h, c, l; scanf("%lf %lf %lf", &h, &c, &l);

        h = h/100; c = c/100; l = l/100;

        printf("%.4lf\n", l * sqrt(n*n*(c*c + h*h)));
    }

    return 0;
}
