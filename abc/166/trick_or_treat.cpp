#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < k; i++) {
        int d;
        scanf("%d", &d);
        for (int j = 0; j < d; j++) {
            int b;
            scanf("%d", &b);
            a[b - 1]++;
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}