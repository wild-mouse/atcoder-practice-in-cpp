#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int c = 1; c <= 3; c++) {
        if ((a * b * c) % 2 == 1) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}