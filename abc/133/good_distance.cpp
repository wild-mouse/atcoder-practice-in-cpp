#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isDistanceAInteger(vector<int> a, vector<int> b) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += abs((a[i] - b[i]) * (a[i] - b[i]));
    }
    int s = sqrt(sum);
    return s * s == sum;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int> > points = vector<vector<int> >(n);

    for (int i = 0; i < n; i++) {
        vector<int> coordinates = vector<int>(d);
        for (int j = 0; j < d; j++) {
            cin >> coordinates[j];
        }
        points[i] = coordinates;
    }

    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isDistanceAInteger(points[i], points[j])) {
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}