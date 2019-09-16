#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 59) {
        cout << "Bad\n";
    } else if (n <= 89) {
        cout << "Good\n";
    } else if (n <= 99) {
        cout << "Great\n";
    } else {
       cout << "Perfect\n";
    }
}