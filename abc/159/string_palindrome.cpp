#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (s != rs) {
        cout << "No" << endl;
        return 0;
    }
    string s1 = s.substr(0, (s.size() - 1) / 2);
    string rs1 = s1;
    reverse(rs1.begin(), rs1.end());
    if (s1 != rs1) {
        cout << "No" << endl;
        return 0;
    }
    string s2 = s.substr(0, (s.size() - 1) / 2);
    string rs2 = s2;
    reverse(rs2.begin(), rs2.end());
    if (s2 != rs2) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}