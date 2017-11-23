#include <bits/stdc++.h>

using namespace std;

int main () {

  map<int, int> numbers;
  vector<int> number;
  int n;
  while(cin >> n) {
    if (numbers[n] == 0) {
      number.push_back(n);
    }
    numbers[n]++;
  }

  for (int i = 0; i < (int) number.size(); i++) {
    cout << number[i] << " " << numbers[number[i]] << endl;
  }

  return 0;
}
