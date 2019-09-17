#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (x >= y) {
        cout << "War\n";
        return 0;
    }
    int nmax = -101;
    for (int i = 0; i < n; i++) {
        int cn;
        cin >> cn;
        if (cn > nmax) {
            nmax = cn;
        }
    }
    int minm = 101;
    for (int i = 0; i < m; i++) {
        int cm;
        cin >> cm;
        if (cm < minm) {
            minm = cm;
        }
    }
    int minz = nmax + 1;
    int maxz = minm;
    if (nmax >= minm || minz <= x || maxz >= y) {
        cout << "War\n";
    } else {
        cout << "No War\n";
    }
}