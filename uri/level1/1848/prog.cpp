#include <bits/stdc++.h>

using namespace std;

int func(string s) {
    int sum = 0;

    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i] == '*') {
            sum += pow(2, ((s.size()-1)-i));
        }
    }

    return sum;
}

int main () {

    string s; int i = 0, v[3] = {0};

    while (getline(cin, s), i < 3) {
        if (s == "caw caw") {
            i++;
        } else {
            v[i] += func(s);
        }
    }

    for (int j = 0; j < 3; j++) {
        cout << v[j] << endl;
    }

    return 0;
}
