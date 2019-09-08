#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    cout << max(max(add, sub), mul) << "\n";
}