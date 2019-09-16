#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    int k = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (k == n) {
                cout << s[i] << s[j] << "\n";
            }
            k++;
        }
    }
}