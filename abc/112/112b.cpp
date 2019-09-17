#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int mini = -1;
    int minc = 1001;
    int c, tt;
    for (int i = 0; i < n; i++) {
        cin >> c >> tt;
        if (tt <= t && c < minc) {
            minc = c;
        }
    }
    if (minc == 1001) {
        cout << "TLE\n";
    } else {
        cout << minc << "\n";
    }
}