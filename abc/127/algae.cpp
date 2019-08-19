#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, d, x;
    cin >> r >> d >> x;
    vector<int> xs = vector<int>();
    int xx = x;
    for (int i = 1; i <= 10; i++) {
        xx = r * xx - d;
        cout << xx << endl;
    }

    return 0;
}