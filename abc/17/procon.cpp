#include <iostream>

using namespace std;

int main() {
    int c = 0;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        c += s * e / 10;
    }
    cout << c << "\n";
}