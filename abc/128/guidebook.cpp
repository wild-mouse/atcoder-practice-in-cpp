#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, string, int> > rs = vector<tuple<int, string, int> >(n);
    for (int i = 1; i <= n; i++) {
        string s;
        int p;
        cin >> s >> p;
        rs[i - 1] = make_tuple(i, s, p);
    }
    struct {
        bool operator()(
                tuple<int, string, int> a,
                tuple<int, string, int> b
        ) const {
            if (get<1>(a) < get<1>(b)) {
                return true;
            }
            if (get<1>(a) > get<1>(b)) {
                return false;
            }
            return get<2>(a) > get<2>(b);
        }
    } compare;
    sort(rs.begin(), rs.end(), compare);
    for (int i = 0; i < rs.size(); i++) {
        cout << get<0>(rs[i]) << endl;
    }

    return 0;
}