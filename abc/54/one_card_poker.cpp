#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
        a = 14;
    }
    if (b == 1) {
        b = 14;
    }
    if (a == b) {
        cout << "Draw\n";
    } else if (a > b) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}