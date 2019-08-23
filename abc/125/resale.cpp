#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v = vector<int>(n);
    for (int i = 0; i < n; i++ ) {
        cin >> v[i];
    }
    int t = 0;
    vector<int> c = vector<int>(n);
    for (int i = 0; i < n; i++ ) {
        cin >> c[i];
        if (v[i] > c[i]) {
            t += v[i] - c[i];
        }
    }
    cout << t << endl;

    return 0;
}