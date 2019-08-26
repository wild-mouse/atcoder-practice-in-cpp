#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    V v = V(5);
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (abs(v[i] - v[j]) > k) {
                cout << ":(" << "\n";
                return 0;
            }
        }
    }
    cout << "Yay!\n";
}