#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long s = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 ==0) {
            continue;
        } else {
            s += i;
        }
    }
    cout << s << endl;
    return 0;
}