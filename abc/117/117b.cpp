#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l = vector<int>(n);
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        s += l[i];
    }
    sort(l.begin(), l.end());
    if ((s - l.back()) > l.back()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}