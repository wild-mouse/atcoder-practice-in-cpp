#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a.length() > b.length()) {
        cout << a << "\n";
    } else {
        cout << b << "\n";
    }
}