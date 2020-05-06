#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int t = 0;
    double a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t += a[i];
    }
    int c = 0;
    double cc = (double)t / (4 * (double)m);
    for (int i = 0; i < n; i++) {
        if (a[i] >= cc) {
            c++;
        }
    }
    if (c >= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}