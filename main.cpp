#include <iostream>
#include <cmath>

using namespace std;

float line(int x)
{
    float y = 0;
    if (x >= -8 && x < -5)
    {
        y = -3;
    }
    if (x >= -5 && x < -3)
    {
        y = x + 3;
    }
    if (x >= -3 && x < 3)
    {
        y = sqrt(9 - x * x);
    }
    if (x >= 3 && x < 8)
    {
        y = 0.6 * (x - 3);
    }
    if (x >= 8 && x <= 10)
    {
        y = 3;
    }
    return y;
}

void main()
{
    cout << "The START" << endl;
    for (int x = -8; x <= 10; x++)
    {
        cout << "x = " << x << " y = " << line(x) << endl;
    }
    cout << "The END";
}