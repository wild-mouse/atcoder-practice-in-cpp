#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 1) {
        cout << "0\n";
        return 0;
    }
    int c = a;
    int d = 1;
    while (true) {
        if (c >= b) {
            cout << d << "\n";
            return 0;
        }
        c += a - 1;
        d++;
    }
}