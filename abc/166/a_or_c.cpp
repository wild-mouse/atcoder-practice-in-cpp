#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s1;
    cin >> s1;
    string s2 = "ABC";
    if (s1.compare(s2) == 0) {
        cout << "ARC" << endl;
    } else {
        cout << "ABC" << endl;
    }

    return 0;
}