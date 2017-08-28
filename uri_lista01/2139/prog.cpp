#include <bits/stdc++.h>

using namespace std;

int getDays (int month, int day) {
    int sum = 0;
    int a[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    for (int i = month; i <= 12 ; i++) {
       sum += a[i-1];
    }

    sum -= day;

    return sum;
}

int main() {

    int month, day;

    while(cin >> month >> day) {
        if (month == 12 && day == 25) {
            cout << "E natal!" << endl;
        } else if (month == 12 && day == 24) {
            cout << "E vespera de natal!" << endl;
        } else if (month == 12 && day > 25) {
            cout << "Ja passou!" << endl;
        } else {
            cout << "Faltam " << getDays(month, day) << " dias para o natal!" << endl;
        }
    }

    return 0;
}

