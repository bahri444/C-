#include <iostream>
using namespace std;
int main()
{
    string nama, kode_caset;
    int Biaya_sewa, lama_sewa, denda, totalbayar;
    cout << "input nama :";
    cin >> nama;
    cout << "input kode caset A/B/C:";
    cin >> kode_caset;
    cout << "input lama sewa :";
    cin >> lama_sewa;
    if (kode_caset == "A" || "a")
    {
        Biaya_sewa = 7500;
        denda = (lama_sewa - 2) * 1000;
        totalbayar = Biaya_sewa + denda;
    }
    else if (kode_caset == "B" || "b")
    {
        Biaya_sewa = 10000;
        denda = (lama_sewa - 2) * 1000;
        totalbayar = Biaya_sewa + denda;
    }
    else if (kode_caset == "C" || "c")
    {
        Biaya_sewa = 5000;
        denda = (lama_sewa - 2) * 1000;
        totalbayar = Biaya_sewa + denda;
    }
    else
    {
        cout << kode_caset << " Kode Caset Tidak Valid..." << endl;
        cout << "Maka peminjaman Gagal....!" << endl;
    }
    cout << "Nama Peminjam : " << nama << endl;
    cout << "Anda akan meminjam Caset : " << kode_caset << " dengan biaya :" << Biaya_sewa << endl;
    cout << "Denda : " << denda << endl;
    cout << "Total Bayar :" << totalbayar << endl;
}