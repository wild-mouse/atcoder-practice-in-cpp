#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if (sum % 2 != 0) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << sum / 2 << endl;
    }

    return 0;
}