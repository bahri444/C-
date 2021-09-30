#include <iostream>
using namespace std;
int main()
{
    for (size_t i = 1; i <= 50; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (size_t j = 0; j <= 50; j++)
    {
        if (j % 2 == 0)
        {
            cout << j << " ";
        }
    }
}
