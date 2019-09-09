#include <iostream>

using namespace std;

int main() {
    char c;
    int count = 0;
    for (int i = 0; i < 3; i++) {
        cin >> c;
        if (c == '1'){
            count++;
        }
    }
    cout << count << "\n";
}