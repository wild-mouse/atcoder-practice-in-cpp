#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long c = n / (a + b) * a;
    long long d = n % (a + b);
    long long e;
    if (a >= d) {
        e = d;
    } else {
        e = a;
    }
    printf("%llu\n", c + e);

    return 0;
}