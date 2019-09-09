#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool isAbc = false;
    if (s.find('a') != -1
        && s.find('b') != -1
        && s.find('c') != -1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}