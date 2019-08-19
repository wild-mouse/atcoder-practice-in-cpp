#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ws = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> ws[i];
    }
    int min = 10001;
    for (int i = 0; i < n; i++) {
        int s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                s1 += ws[j];
            } else {
                s2 += ws[j];
            }
        }
        if (abs(s1 - s2) < min) {
            min = abs(s1 - s2);
        }
    }
    cout << min << endl;

    return 0;
}