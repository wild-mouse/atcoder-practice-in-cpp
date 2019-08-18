#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v = vector<float>();
    for (int i = 0; i < n; i++) {
        float vv;
        cin >> vv;
        v.push_back(vv);
    }
    sort(v.begin(), v.end(), greater<>());
    while (v.size() > 1) {
        float v1 = v.back();
        v.pop_back();
        float v2 = v.back();
        v.pop_back();
        float vv = (v1 + v2) / 2;
        v.push_back(vv);
        sort(v.begin(), v.end(), greater<>());
    }
    float vv = v.back();
    cout << vv << endl;

    return 0;
}