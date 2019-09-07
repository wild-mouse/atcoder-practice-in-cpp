#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a = vector<int>(n + 1);
    vector<int> b = vector<int>(n + 1);
    vector<int> c = vector<int>(n);
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n + 1; i++) {
        cin >> b[i];
    }
    for (int i = 1; i < n; i++) {
        cin >> c[i];
    }
    int s = 0;
    int previous = -1;
    for (int i = 1; i < n + 1; i++) {
        if (previous == a[i] -1) {
            s += c[previous];
        }
        s += b[a[i]];
        previous = a[i];
    }
    cout << s << "\n";
}