#include <iostream>

// picture 2

using namespace std;

float x;

float line(int x)
{
    float y = 0;
    if (x >= -10 && x < -8)
    {
        return -3;
    }
    if (x >= -8 && x < -3)
    {
        return (x + 3) * (0.6);
    }
    if (x >= -3 && x < 3)
    {
        return (9 - x * x);
    }
    if (x >= 3 && x <= 5)
    {
        return x - 3;
    }
    if (x > 5 && x <= 8)
    {
        return 3;
    }
    return 0;
}

float main()
{
    cout << "input x = ";
    cin >> x;
    cout << "y = " << line(x);
}