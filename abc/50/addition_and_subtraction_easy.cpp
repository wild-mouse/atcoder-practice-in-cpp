#include <iostream>

using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '+') {
        cout << a + b << "\n";
    } else {
        cout << a - b << "\n";
    }
}