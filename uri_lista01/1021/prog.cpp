#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;

    int nint = ((int)n);
    n = n - nint;

    cout << "NOTAS:" << endl;
    cout << nint/100 << " nota(s) de R$ 100.00" << endl; nint = nint%100;
    cout << nint/50 << " nota(s) de R$ 50.00" << endl; nint = nint%50;
    cout << nint/20 << " nota(s) de R$ 20.00" << endl; nint = nint%20;
    cout << nint/10 << " nota(s) de R$ 10.00" << endl; nint = nint%10;
    cout << nint/5 << " nota(s) de R$ 5.00" << endl; nint = nint%5;
    cout << nint/2 << " nota(s) de R$ 2.00" << endl; nint = nint%2;

    cout << "MOEDAS:" << endl;
    cout << nint << " moeda(s) de R$ 1.00" << endl; nint = (int)(n*100);
    cout << nint/50 << " moeda(s) de R$ 0.50" << endl; nint = nint%50;
    cout << nint/25 << " moeda(s) de R$ 0.25" << endl; nint = nint%25;
    cout << nint/10 << " moeda(s) de R$ 0.10" << endl; nint = nint%10;
    cout << nint/5 << " moeda(s) de R$ 0.05" << endl; nint = nint%5;
    cout << nint << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

