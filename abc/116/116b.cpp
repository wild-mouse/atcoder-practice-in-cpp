#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int s;
    cin >> s;
    V a = V(1000001);
    for (int i = 1; i < 1000001; i++) {
        if (i == 1) {
            a[i] = s;
        } else if (a[i - 1] % 2 == 0) {
            a[i] = a[i - 1] / 2;
        } else {
            a[i] = a[i - 1] * 3 + 1;
        }
        for (int j = 1; j < i; j++) {
            if (a[i] == a[j]) {
                cout << i << "\n";
                return 0;
            }
        }
    }
}