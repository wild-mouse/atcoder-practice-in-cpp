#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a = vector<int>();
    for (int i = 1; i <= n; i++) {
        a.push_back(i + l - 1);
    }
    int minI = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i]) < abs(a[minI])) {
            minI = i;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i == minI) {
            continue;
        }
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}