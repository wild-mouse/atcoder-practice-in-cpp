#include <iostream>

using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    bool h;
    if ((a == 'H' && b == 'H') || (a == 'D' && b == 'D')) {
        cout << "H\n";
    } else {
        cout << "D\n";
    }
}