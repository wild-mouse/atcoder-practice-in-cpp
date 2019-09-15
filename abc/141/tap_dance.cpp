#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    string goodOdds = "RUD";
    string goodEvens = "LUD";
    bool isGood = true;
    for (int j = 0; j < s.length(); j++) {
        int i = j + 1;
        if (i % 2 == 0 && goodEvens.find(s[j]) == -1) {
            isGood = false;
        }
        if (i % 2 == 1 && goodOdds.find(s[j]) == -1) {
            isGood = false;
        }
    }
    if (isGood) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}