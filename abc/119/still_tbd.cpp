#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '/'), s.end());
    int d = stoi(s);
    if (d > 20190430) {
        cout << "TBD\n";
    } else {
        cout << "Heisei\n";
    }
}