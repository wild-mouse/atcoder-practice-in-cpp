#include <iostream>

using namespace std;

int main() {
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    if (l1 == l2) {
        cout << l3 << "\n";
    } else if (l1 == l3) {
        cout << l2 << "\n";
    } else {
        cout << l1 << "\n";
    }
}