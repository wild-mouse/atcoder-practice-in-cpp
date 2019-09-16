#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    if (stoi(n) % 3 == 0 || n.find('3') != -1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}