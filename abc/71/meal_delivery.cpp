#include <iostream>

using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    int xa = abs(x - a);
    int xb = abs(x - b);
    if (xa < xb) {
        cout << "A\n";
    } else {
        cout << "B\n";
    }
}