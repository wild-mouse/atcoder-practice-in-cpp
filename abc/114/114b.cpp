#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    int t = 753;
    vector<int> v = vector<int>(s.length() - 2);
    for (int i = 0; i <= s.length() - 2; i++) {
        string ss = s.substr(i, 3);
        v[i] = abs(753 - stoi(ss));
    }
    sort(v.begin(), v.end());
    cout << v[0] << "\n";
}