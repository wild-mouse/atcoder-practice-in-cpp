#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int fh = x / 500;
    int f = x % 500 / 5;
    cout << fh * 1000 + f * 5 << endl;

    return 0;
}