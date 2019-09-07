#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = vector<int>(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end(), greater<>());

    cout << stoi(to_string(v[0]) + to_string(v[1])) + v[2] << "\n";
}