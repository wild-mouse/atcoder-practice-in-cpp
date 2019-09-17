#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    V b = V(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int d = 0;
    for (int j = 0; j < n; j++) {
        int a ;
        int s = c;
        for (int i = 0; i < m; i++) {
            cin >> a;
            s += a * b[i];
        }
        if (s > 0) {
            d++;
        }
    }
    cout << d << "\n";
}