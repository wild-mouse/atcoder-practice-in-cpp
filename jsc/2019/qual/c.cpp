#include <iostream>

using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    int c = 0;
    for (int mm = 1; mm <= m; mm++) {
        for (int dd = 1; dd <= d; dd++) {
            string ddd = to_string(dd);
            if (ddd.length() == 1) {
                continue;
            }
            int d1 = ddd[1] - 48;
            int d10 = ddd[0] - 48;
            if (d1 >= 2 && d10 >= 2 && d1 * d10 == mm) {
                c++;
            }
        }
    }
    cout << c << "\n";
}