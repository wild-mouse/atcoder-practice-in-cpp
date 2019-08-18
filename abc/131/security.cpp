#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool isGood = true;
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == s[i]) {
            isGood = false;
        }
    }
    if (isGood) {
        cout << "Good" << endl;
    } else {
        cout << "Bad" << endl;
    }

    return 0;
}