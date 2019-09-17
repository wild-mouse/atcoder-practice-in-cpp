#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n;
    cin >> n;
    V p = V(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            s += p[i] / 2;
        } else {
            s += p[i];
        }
    }
    cout << s << "\n";
}