#include <iostream>

using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) {
        int b;
        cin >> b;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == b) {
                    a[i][j] = 1;
                }
            }
        }
    }

    return 0;
}