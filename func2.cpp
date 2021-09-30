#include <iostream>
using namespace std;
void penjumlahan();
int main()
{
    penjumlahan();
}
void penjumlahan()
{
    int a, b, hasil;
    char aritmatika;
    cout << "input angka pertama :";
    cin >> a;
    cout << "input operator :";
    cin >> aritmatika;
    cout << "input angka kedua :";
    cin >> b;
    switch (aritmatika)
    {
    case '+':
        hasil = (a + b);
        cout << "hasil penjumlahan :" << hasil;
        break;

    case '*':
        hasil = (a * b);
        cout << "hasil perkalian :" << hasil;
        break;

    case '/':
        hasil = (a / b);
        cout << "hasil pembagian :" << hasil;
        break;

    case '-':
        hasil = (a - b);
        cout << "hasil pengurangan :" << hasil;
        break;
    default:
        cout << "operator salah :" << endl;
        break;
    }
}
