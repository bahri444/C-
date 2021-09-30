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
    cout << "input angka pertama :";
    cin >> a;
    cout << "input angka kedua :";
    cin >> b;
    hasil = (a + b);
    cout << "hasil penjumlahan :" << hasil;
}
