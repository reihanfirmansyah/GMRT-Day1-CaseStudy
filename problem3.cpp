#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    int loker[5];

    if (cin >> x >> loker[1] >> loker[2] >> loker[3] >> loker[4]) {
        int kunci_sekarang = x;
        int loker_terbuka = 0;

        while (kunci_sekarang != 0) {
            loker_terbuka++;
            kunci_sekarang = loker[kunci_sekarang];
        }

        if (loker_terbuka == 4) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}