#include <iostream>
#include <string>

using namespace std;

bool bisa_disusun(int sisa[3], int dipilih, int total_sisa) {
    for (int j = 0; j < 3; j++) {
        if (j == dipilih) {
            if (sisa[j] > total_sisa / 2) return false;
        } else {
            if (sisa[j] > (total_sisa + 1) / 2) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sisa[3];
    if (cin >> sisa[0] >> sisa[1] >> sisa[2]) {
        int total = sisa[0] + sisa[1] + sisa[2];
        string hasil = "";
        hasil.reserve(total);

        int terakhir = -1;
        bool mungkin = true;

        for (int langkah = 0; langkah < total; langkah++) {
            bool ditemukan = false;

            for (int i = 0; i < 3; i++) {
                if (sisa[i] > 0 && i != terakhir) {
                    sisa[i]--;
                    int total_sisa = total - langkah - 1;

                    if (bisa_disusun(sisa, i, total_sisa)) {
                        hasil += (char)('A' + i);
                        terakhir = i;
                        ditemukan = true;
                        break;
                    }

                    sisa[i]++;
                }
            }

            if (!ditemukan) {
                mungkin = false;
                break;
            }
        }

        if (mungkin) {
            cout << hasil << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}