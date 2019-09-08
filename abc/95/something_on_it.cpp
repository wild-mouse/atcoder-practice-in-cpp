#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 700;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] =='o') {
            c += 100;
        }
    }
    cout << c << "\n";
}