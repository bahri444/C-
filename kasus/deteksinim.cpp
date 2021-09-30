#include <iostream>
//#include <stdio.h>

using namespace std;
int main()
{
    string nim, nama, indeks1, indeks2, prodi, ttl;
    string input, in2, in3, in4, in5, in6, in7, in8, in9;
    cout << "silahkan input NIM :";
    cin >> nim;
    indeks1 = (nim[0]);
    indeks2 = (nim[1]);
    prodi = indeks1 + indeks2;
    in2 = (nim[2]);
    in3 = (nim[3]);
    in4 = (nim[4]);
    in5 = (nim[5]);
    in6 = (nim[6]);
    in7 = (nim[7]);
    in8 = (nim[8]);
    in9 = (nim[9]);
    nim = in2 + in3 + in4 + in5 + in6 + in7 + in8 + in9;
    cout << "silahkan input Nama :";
    cin >> nama;
    cout << "input tanggal lahir :";
    cin >> ttl;
    if (prodi == "SI")
    {
        cout << "Prodi :" << prodi << " (Sistem informasi)" << endl;
    }
    else if (prodi == "TI")
    {
        cout << "Prodi \t:" << prodi << " (Teknik Informatika)" << endl;
    }
    else
    {
        cout << "Nim tidak terdaftar !" << endl;
    }
    cout << "NIM \t\t:" << nim << endl;
    cout << "Nama \t\t:" << nama << endl;
    cout << "tanggal lahir \t:" << ttl << endl;
}