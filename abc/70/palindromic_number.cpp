#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    string nn = n;
    reverse(nn.begin(), nn.end());
    if (n == nn) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}