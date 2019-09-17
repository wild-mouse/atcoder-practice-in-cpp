#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n, m;
    cin >> n >> m;
    V mm = V(m);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            ++mm[a-1];
        }
    }
    int c = 0;
    for (int i = 0; i < m; i++) {
        if (mm[i] == n) {
            ++c;
        }
    }
    cout << c << "\n";
}