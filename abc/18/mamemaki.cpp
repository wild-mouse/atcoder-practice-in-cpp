#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> abc = { a, b, c };
    sort(abc.begin(), abc.end(), greater<>());

    cout << distance(abc.begin(), find(abc.begin(), abc.end(), a)) + 1 << "\n";
    cout << distance(abc.begin(), find(abc.begin(), abc.end(), b)) + 1 << "\n";
    cout << distance(abc.begin(), find(abc.begin(), abc.end(), c)) + 1 << "\n";
}