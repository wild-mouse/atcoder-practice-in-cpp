#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ab = a + b;
    if (ab >= 10) {
        cout << "error\n";
    } else {
        cout << ab << "\n";
    }
}