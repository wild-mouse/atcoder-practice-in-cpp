#include <iostream>

using namespace std;

int main() {
    string c1, c2;
    cin >> c1 >> c2;
    reverse(c2.begin(), c2.end());
    if (c1 == c2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}