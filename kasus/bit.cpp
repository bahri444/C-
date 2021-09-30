#include <iostream>
using namespace std;
int main()
{
    int arr2d[2][3] = {1, 2, 3, 4, 5, 6};
    int arr2d2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    for (size_t i = 0; i <= 2; i++)
    {
        for (size_t k = 0; k <= 3; k++)
        {
            cout << arr2d[i, k];
            cout << arr2d2[i, k];
        }
        cout << endl;
    }
}