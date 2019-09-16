#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float ba = b / a;
    float dc = d / c;
    if (ba > dc) {
        cout << "TAKAHASHI\n";
    } else if (ba == dc) {
        cout << "DRAW\n";
    } else {
        cout << "AOKI\n";
    }
}