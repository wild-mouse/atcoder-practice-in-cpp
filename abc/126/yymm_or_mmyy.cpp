#include <iostream>

using namespace std;

bool isMonth(int a) {
    return a >= 1 && a <= 12;
}

int main() {
    int s1, s2;
    scanf("%02d", &s1);
    scanf("%02d", &s2);
    if (!isMonth(s1) && !isMonth(s2)) {
        cout << "NA" << endl;
    } else if (isMonth(s1) && isMonth(s2)) {
        cout << "AMBIGUOUS" << endl;
    } else if (isMonth(s1) && !isMonth(s2)) {
        cout << "MMYY" << endl;
    } else {
        cout << "YYMM" << endl;
    }

    return 0;
}