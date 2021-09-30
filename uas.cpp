#include <iostream>
using namespace std;
int main()
{
    string nama_karyawan, golongan;
    int upah, uang_lembur, jam_kerja, gaji_pegawai;
    cout << "silahkan input nama karyawan :";
    cin >> nama_karyawan;
    cout << "silahkan input golongan :";
    cin >> golongan;
    cout << "silahkan input jam kerja :";
    cin >> jam_kerja;
    if (golongan == "A")
    {
        upah = jam_kerja * 5000;
    }
    else if (golongan == "B")
    {
        upah = jam_kerja * 7000;
    }
    else if (golongan == "C")
    {
        upah = jam_kerja * 8000;
    }
    else if (golongan == "D")
    {
        upah = jam_kerja * 10000;
    }
    if (jam_kerja >= 48)
    {
        uang_lembur = (jam_kerja - 48) * 4000;
    }
    else if (jam_kerja < 48)
    {
        cout << "anda tidak mendapatkan bonus karena kerja kurang dari : " << jam_kerja << ".jam" << endl;
    }
    gaji_pegawai = upah + uang_lembur;
    cout << "Nama Karyawan :" << nama_karyawan << endl;
    cout << "Gaji yang di terima adalah :" << gaji_pegawai << endl;
}