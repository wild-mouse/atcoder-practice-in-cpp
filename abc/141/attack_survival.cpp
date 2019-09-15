#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    V a = V(n, k);
    for (int i = 0; i < q; i++) {
        int ai;
        cin >> ai;
        a[ai - 1] += 1;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > q) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}