#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (to_string(i).length() % 2 == 0)
        {
            continue;
        }
        c++;
    }
    cout << c << endl;

    return 0;
}