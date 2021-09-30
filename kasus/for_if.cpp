#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "silahkan input angka int :";
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    int k = 0;
    while (k <= input)
    {
        if (k % 2 == 1)
        {
            cout << k << " ";
        }
        k++;
    }
}