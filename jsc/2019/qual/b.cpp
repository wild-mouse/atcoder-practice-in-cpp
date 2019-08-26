#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b = vector<int>(n * k);
    for (int i = 0; i < n * k; i++) {
        b[i] = a[i % n];
    }

    int c = 0;
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (b[j] > b[i]) {
                c++;
            }
        }
    }
    cout << c << "\n";
}