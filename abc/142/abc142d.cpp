#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

bool isCoPrime(int a, int b) {
    for (int j = 3; j < i; i++) {
        if (i %j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    int maxI = 0;
    int maxAB = max(a, b);
    for (int i = 1; i < maxAB; i++) {
//        if (!isCoPrime(i)) {
//            continue;
//        }
        if (a % i == 0 && b % i == 0 && maxI < i) {
            cout << i << "\n";
            maxI = i;
        }
    }
    cout << maxI << "\n";
}