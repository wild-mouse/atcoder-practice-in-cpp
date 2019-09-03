#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char, char> helix;
    helix['A'] = 'T';
    helix['C'] = 'G';
    helix['G'] = 'C';
    helix['T'] = 'A';

    char c;
    cin >> c;
    cout << helix[c] << "\n";
}