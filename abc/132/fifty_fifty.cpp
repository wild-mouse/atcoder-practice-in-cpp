#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < 4; i++) {
        bool a = false;
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                continue;
            }
            if (s[i] == s[j] && !a) {
                a = true;
                continue;
            }
            if (s[i] == s[j] && a) {
                cout << "No" << endl;
                return 0;
            }
        }
        if (!a) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}