#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b / a;
    if (c < d) {
        d = c;
    }
    cout << d << "\n";
}