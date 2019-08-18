#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> pqr = vector<int>(3);
    cin >> pqr[0] >> pqr[1] >> pqr[2];
    sort(pqr.begin(), pqr.end());
    cout << pqr[0] + pqr[1] << endl;

    return 0;
}