#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        if (i != p) {
            c++;
        }
    }
    if (c > 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}

