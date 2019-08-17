#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int w = 1 + d * 2;
    if (n % w == 0) {
        cout << n / w << endl;
    } else {
        cout << n / w + 1 << endl;
    }

    return 0;
}