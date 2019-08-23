#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = 0;
    if (a > b) {
        c += a--;
    } else {
        c += b--;
    }
    if (a > b) {
        c += a--;
    } else {
        c += b--;
    }
    cout << c << endl;

    return 0;
}