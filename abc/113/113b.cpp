#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    float t, a;
    cin >> t >> a;
    vector<int> h = vector<int>(n);
    float mind = 1000;
    int mini = -1;
    for (int i = 0; i < n; i++) {
        float hh;
        cin >> hh;
        float d = (t - hh * 0.006) - a;
        if (d < 0) {
            d *= -1;
        }
        if (d < mind) {
            mind = d;
            mini = i + 1;
        }
    }
    cout << mini << "\n";
}