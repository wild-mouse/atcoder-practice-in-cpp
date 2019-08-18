#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> l = vector<int>();
    for (int i = 0; i < n; i++) {
        int ll;
        cin >> ll;
        l.push_back(ll);
    }

    int c = 1;
    int d = 0;
    for (int i = 1; i <= n; i++) {
        d = d + l[i - 1];
        if (d <= x) {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}