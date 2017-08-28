#include <bits/stdc++.h>

using namespace std;

double fibonacci (double x) {
    double root = pow(5, 1/2.0);
    return ((pow((1 + root)/2, x/1.0)) - (pow((1 - root)/2, x/1.0))) / root;
}

int main () {
    double n;

    cin >> n;

    printf("%.1lf\n", fibonacci(n));

    return 0;
}

