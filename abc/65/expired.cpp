#include <iostream>

using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    if (a >= b) {
        cout << "delicious\n";
    } else if (x >= abs(b - a)) {
        cout << "safe\n";
    } else {
        cout << "dangerous\n";
    }
}