#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = 3;
    if (a == b) {
        d--;
    }
    if (a == c || b == c) {
        d--;
    }
    cout << d << "\n";
}