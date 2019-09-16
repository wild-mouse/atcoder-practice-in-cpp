#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.back() == 'T') {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}