#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = 0;
    if (a >= 13) {
        c = b;
    } else if (a >= 6) {
        c = b / 2;
    }
    cout << c << endl;

    return 0;
}