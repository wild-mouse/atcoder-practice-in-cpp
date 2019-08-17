#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int add = a + b;
    int minus = a - b;
    int multiply = a * b;
    cout << max(max(add, minus), multiply) << endl;

    return 0;
}