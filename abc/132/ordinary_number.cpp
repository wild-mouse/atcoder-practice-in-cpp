#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 1; i < a.size() - 1; i++) {
        if (max(max(a[i - 1], a[i]), a[i + 1]) == a[i]) {
            continue;
        }
        if (min(min(a[i - 1], a[i]), a[i + 1]) == a[i]) {
            continue;
        }
        c++;
    }
    cout << c << endl;

    return 0;
}