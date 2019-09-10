#include <iostream>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.back() == b[0] && b.back() == c[0]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}