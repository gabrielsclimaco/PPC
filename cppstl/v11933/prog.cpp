#include <bits/stdc++.h>

using namespace std;

int main () {

  int n;
  while (scanf("%d", &n), n != 0) {
    int sum = 0, even = 0, count = 0, temp = n;
    while(temp != 0) {
      if (temp % 2 == 1) {
        even++;
        if (even % 2 == 1) {
          sum += pow(2, count);
        }
      }

      temp /= 2;
      count++;
    }

    printf("%d %d\n", sum, n-sum);
  }

  return 0;
}
