#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (i + 1 == k)  {
            cout << (char)(s[i] + 32);
        } else {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}