#include <iostream>

using namespace std;

int main() {
    int x, t;
    cin >> x >> t;
    if (x > t) {
        cout << x - t << "\n";
    } else {
        cout << "0\n";
    }
}