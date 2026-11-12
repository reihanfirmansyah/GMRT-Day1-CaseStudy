#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, l, k, p, q;
    if (cin >> t >> l >> k >> p >> q) {
        long long max_profit = 0;
        long long max_manik = min(l, t / 2);

        for (long long x = 0; x <= max_manik; x++) {
            long long sisa_tali = t - (2 * x);
            long long y = min(k / 2, sisa_tali / 3);
            long long profit = (x * p) + (y * q);
            max_profit = max(max_profit, profit);
        }

        cout << max_profit << "\n";
    }
    return 0;
}