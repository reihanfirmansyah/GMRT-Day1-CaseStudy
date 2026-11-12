#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (cin >> a >> b >> c) {
        long long selisih = abs(a - b);

        if (selisih % 2 != 0) {
            cout << -1 << "\n";
        } else {
            long long target = selisih / 2;
            long long perjalanan = (target / c) + (target % c != 0 ? 1 : 0);
            cout << perjalanan << "\n";
        }
    }
    return 0;
}