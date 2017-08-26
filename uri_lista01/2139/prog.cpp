#include <bits/stdc++.h>

using namespace std;

int getDays (int month, int day) {
    int sum = 0;

    if (month == 12) {
        return 25 - day;
    }

    for (int i = month; i <= 12 ; i++) {
        if (i == 2) {
            sum += 29;
        } else if (i % 2 != 0 || i == 8) {
            sum += 31;
        } else if (i == 12) {
            sum += 25;
        } else {
            sum += 30;
        }
    }

    sum -= day + 1;

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

