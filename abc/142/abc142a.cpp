#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n;
    cin >> n;
    float a = (float)(n / 2);
    cout << 1.0 - a / (float)n << "\n";
}