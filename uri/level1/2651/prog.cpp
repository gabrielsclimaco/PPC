#include <bits/stdc++.h>

using namespace std;

int main () {

    string s; getline(cin, s);

    for (int i = 0; i < (int) s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    if (s.find("zelda") != string::npos) {
        cout << "Link Bolado" << endl;
    } else {
        cout << "Link Tranquilo" << endl;
    }

    return 0;
}
