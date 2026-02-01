#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    string nis;
    float nilai;
};

int main() {
    const int MAX = 100;
    Siswa data[MAX];
    int n;

    cout << "Masukkan jumlah siswa (maks 100): ";
    cin >> n;
    cin.ignore();

    if (n > MAX) {
        cout << "Jumlah melebihi batas maksimum!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        getline(cin, data[i].nama);
        cout << "NIS   : ";
        getline(cin, data[i].nis);
        cout << "Nilai : ";
        cin >> data[i].nilai;
        cin.ignore();
    }

    cout << "\n=== Data Siswa ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama  : " << data[i].nama << endl;
        cout << "NIS   : " << data[i].nis << endl;
        cout << "Nilai : " << data[i].nilai << endl;
    }

    return 0;
}

