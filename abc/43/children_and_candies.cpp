#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++) {
        c += i;
    }
    cout << c << "\n";
}