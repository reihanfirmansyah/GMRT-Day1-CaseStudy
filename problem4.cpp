#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (cin >> a >> b >> c) {

        long long selisih = (c % 2) * 3; 
        if (selisih == 3) {
            if (b > 0) {
                selisih = 1;
            }
        } else {
            selisih = (b % 2) * 2;
        }

        if (a >= selisih && (a - selisih) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}