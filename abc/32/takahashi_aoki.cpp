#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    while (true) {
        if (n % a == 0 && n % b ==0) {
            cout << n << "\n";
            return 0;
        }
        n++;
    }
}