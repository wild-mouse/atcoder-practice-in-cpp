#include <iostream>

using namespace std;

int main() {
    long long i = 100;
    long long x;
    cin >> x;
    int y = 0;
    for (int j = 0; ; j++) {
        y++;
        i *= 1.01;
        if (i >= x) {
            cout << y << endl;
            return 0;
        }
    }
}