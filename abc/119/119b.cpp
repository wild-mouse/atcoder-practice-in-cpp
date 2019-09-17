#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float s = 0;
    for (int i = 0; i < n; i++) {
        float x;
        string u;
        cin >> x >> u;
        if (u == "JPY") {
            s += x;
        } else {
            s += x * 380000;
        }
    }
    cout << s << "\n";
}