#include <iostream>

using namespace std;

int main() {
    int a, d;
    cin >> a >> d;
    if (a >= d) {
        cout << a * (d + 1) << "\n";
    } else {
        cout << d * (a + 1) << "\n";
    }
}