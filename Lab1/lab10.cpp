#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

void reduceFraction(int x, int y)
{
    int d;
    d = gcd(x, y);

    x = x / d;
    y = y / d;

    cout << x << '/' << y << endl;
}
 
int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
 
    reduceFraction(num1, num2);
 
    return 0;
}