#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int contains(V &v, int i) {
    return find(v.begin(), v.end(), i) != v.end();
}

int main() {
    int x, y;
    cin >> x >> y;
    V v1 = {1, 3, 5, 7, 8, 10, 12};
    V v2 = {4, 6, 9, 11};
    V v3 = {2};
    bool isSame = false;
    if ((contains(v1, x) && contains(v1, y))
        || (contains(v2, x) && contains(v2, y))) {
        isSame = true;
    }
    if (isSame) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
