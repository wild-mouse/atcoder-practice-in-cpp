#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    int c = ceil((a + b) / 2);
    printf("%d\n", c);
}