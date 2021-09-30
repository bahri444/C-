#include <iostream>
using namespace std;
int main()
{
    int menu, p, l, t, volume, luas, kembali;
    for (size_t i = 0; i <= menu; i++)
    {
        cout << "|=======================================|" << endl;
        cout << "|menu\t\t\t\t\t|" << endl;
        cout << "|1.menghitung volume balok\t\t|" << endl;
        cout << "|2.menghitung luas persegi panjang\t|" << endl;
        cout << "|=======================================|" << endl;
        cout << "masukkan pilihan [1/2] :" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "anda akan menghitung volulme balok" << endl;
            cout << "silahkan input panjang balok:";
            cin >> p;
            cout << "silahkan input lebar balok:";
            cin >> l;
            cout << "silahkan input tinggi balok:";
            cin >> t;

            volume = p * l * t;
            cout << "volume balok di atas adalah :" << volume << endl;
            return 0;
            break;
        case 2:
            cout << "anda akan menghitung luas persegi panjang" << endl;
            cout << "silahkan input panjang persegi:";
            cin >> p;
            cout << "silahkan input lebar lebar persegi:";
            cin >> l;
            luas = p * l;
            cout << "luas persegi panjang di atas adalah :" << luas << endl;
            break;
        default:
            cout << "pilihan yang anda masukkan salah" << endl;
            break;
        }
        cout << "";
    }
}