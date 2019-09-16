#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        int c = i * 10000;
        s += c;
    }
    cout << s / n << "\n";
}