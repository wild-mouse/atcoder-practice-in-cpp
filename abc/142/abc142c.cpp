#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n;
    cin >> n;
    V a = V(n);
    for (int i = 1; i <= n; i++) {
        int j;
        cin >> j;
        a[j - 1] = i;
    }
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << "\n";
}