#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> data;
    int input;
    char choice;

    do {
        cout << "Masukkan angka: ";
        cin >> input;
        data.push_back(input);

        cout << "Tambah angka lagi? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    if (data.empty()) {
        cout << "Array kosong.\n";
        return 0;
    }

    cout << "Menu:\n";
    cout << "1. Cari nilai maksimum\n";
    cout << "2. Cari nilai minimum\n";
    cout << "3. Cari nilai rata-rata\n";
    cout << "Pilih menu (1/2/3): ";
    int menu;
    cin >> menu;

    switch (menu) {
        case 1: {
            int max_val = *max_element(data.begin(), data.end());
            cout << "Nilai maksimum: " << max_val << "\n";
            break;
        }
        case 2: {
            int min_val = *min_element(data.begin(), data.end());
            cout << "Nilai minimum: " << min_val << "\n";
            break;
        }
        case 3: {
            double average = accumulate(data.begin(), data.end(), 0.0) / data.size();
            cout << "Nilai rata-rata: " << average << "\n";
            break;
        }
        default:
            cout << "Pilihan tidak valid.\n";
            break;
    }

    return 0;
}
