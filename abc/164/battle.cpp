#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (bool t = true; ; t = !t) {
        if (t) {
            c -= b;
        } else {
            a -= d;
        }
        if (c <= 0) {
            cout << "Yes" << endl;
            break;
        } else if (a <= 0) {
            cout << "No" << endl;
            break;
        }
    }

    return 0;
}