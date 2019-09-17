#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 0;
    int c = 0;
    string acgt = "ACGT";
    for (int i = 0; i < s.length(); i++) {
        if (acgt.find(s[i]) != -1) {
            c++;
        } else {
            c = 0;
        }
        if (c > max) {
            max = c;
        }
    }
    cout << max << "\n";
}