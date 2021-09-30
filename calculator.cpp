#include <iostream>
using namespace std;
int main()
{
    float a, b, hasil;
    char oper;
    cout << "calculator" << endl;
    cout << "input angka pertama :" << endl;
    cin >> a;
    cout << "pilih operator :" << endl;
    cin >> oper;
    cout << "input angka kedua :" << endl;
    cin >> b;
    switch (oper)
    {
    case '+':
        hasil = a + b;
        cout << "hasil =:" << hasil << endl;
        break;

    default:
        cout << "operator salah" << endl;
        break;
    }
}