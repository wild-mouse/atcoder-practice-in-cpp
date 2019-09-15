#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> abc = vector<int>(3);
    cin >> abc[0] >> abc[1] >> abc[2];
    if (count(abc.begin(), abc.end(), 5) == 2
        && count(abc.begin(), abc.end(), 7) == 1)
    {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}