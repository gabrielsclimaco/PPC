#include <bits/stdc++.h>

using namespace std;

string trim(string s) {
    string word;
    stringstream stream(s);
    stream >> word;

    return word;
}

int main () {

    string s;

    while (getline(cin, s)) {
        int i = 0, j = 0;

        while(s[j]) {

            if (isspace(s[j])) {
                cout << s[j];
            } else {
                putchar((i % 2 == 0) ? toupper(s[j]) : tolower(s[j]));
                i++;
            }

            j++;
        }

        cout << endl;
    }

    return 0;
}
