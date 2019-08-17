#include <iostream>

using namespace std;

int main()
{
    int k, x;
    cin >> k >> x;
    bool isFirst = true;
    for (int y = x - k + 1; y < x + k; y++)
    {
        if (!isFirst)
        {
            cout << " ";
        }
        if (y >= -1000000 && y <= 1000000)
        {
            cout << y;
            isFirst = false;
        }
    }
    cout << endl;

    return 0;
}