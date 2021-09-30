#include <iostream>
using namespace std;
int main()
{
    int gaji, gajibulan, transport, total, bonus_anak, jml_hari_kerja;
    string anak;
    cout << "input gaji harian anda :";
    cin >> gaji;
    cout << "input jumlah hari kerja :";
    cin >> jml_hari_kerja;
    cout << "input jenis kelamin anak untuk mendapatkan bonus :";
    cin >> anak;
    cout << endl;
    if (anak == "laki-laki")
    {
        bonus_anak = jml_hari_kerja * 10000;
    }
    else if (anak == "perempuan")
    {
        bonus_anak = jml_hari_kerja * 15000;
    }
    else if (anak == "lebih_dari_satu")
    {
        bonus_anak = jml_hari_kerja * 20000;
    }
    else if (anak == "tidak_ada")
    {
        cout << "tidak ada bonus untuk anak karena anda belum menikah !" << endl;
    }
    gajibulan = jml_hari_kerja * gaji;
    transport = jml_hari_kerja * 5000;
    total = gajibulan + bonus_anak + transport;
    cout << "total gaji bulanan anda adalah : Rp." << gajibulan << endl;
    cout << "total bonus tranport adalah : Rp." << transport << endl;
    cout << "total bonus untuk anak " << anak << " : Rp." << bonus_anak << endl;
    cout << "total gaji/bulan + bonus untuk anak +bonus transport : Rp." << total << endl;
}