#include <iostream>

using namespace std;

int main() {
    int a;
    string s;
    cin >> a >> s;
    if (a >= 3200) {
        cout << s << endl;
    } else {
        cout << "red" << endl;
    }

    return 0;
}