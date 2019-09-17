#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; ; i++) {
        string s = to_string(i);
        if (s[0] == s[1] && s[1] == s[2]) {
            cout << i << "\n";
            return 0;
        }
    }
}