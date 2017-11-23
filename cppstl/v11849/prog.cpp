#include <bits/stdc++.h>

using namespace std;

int main () {

  int n, m;

  while(scanf("%d %d", &n, &m), n && m) {
    map<int, int> cds;
    vector<int> cdid;

    for (int i = 0; i < n; i++) {
      int a; scanf("%d", &a);

      if (cds[a] == 0) {
        cdid.push_back(a);
      }
      cds[a]++;
    }

    for (int i = 0; i < m; i++) {
      int a; scanf("%d", &a);

      if (cds[a] == 0) {
        cdid.push_back(a);
      }
      cds[a]++;
    }

    int sum = 0;
    for (auto cd:cds) {
      if (cd.second > 1) {
        sum++;
      }
    }

    cout << sum << endl;
  }


  return 0;
}
