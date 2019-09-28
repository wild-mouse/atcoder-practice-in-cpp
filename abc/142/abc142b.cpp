#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n, k;
    cin >> n >> k;
    int c = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        if (h >= k) {
            c++;
        }
    }
    cout << c << "\n";
}