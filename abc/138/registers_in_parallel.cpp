#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a = vector<int>();
    for (int i = 0; i < n; i++) {
        int aa;
        cin >> aa;
        a.push_back(aa);
    }
    float sra = 0;
    for (int i = 0; i < n; i++) {
        sra += 1.0 / a[i];
    }
    float r = 1 / sra;
    printf("%.5f\n", r);
//    cout << fixed << r << endl;

    return 0;
}