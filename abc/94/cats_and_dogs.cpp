#include <iostream>

using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if (a <= x && (a + b) >= x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}