#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    if (n.find('9') != -1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}