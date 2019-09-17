#include <iostream>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int i = max(a, b);
    int j = 0;
    while (true) {
        if (a % i == 0 && b % i == 0) {
            j++;
            if (j == k) {
                cout << i << "\n";
                return 0;
            }
        }
        i--;
    }
}