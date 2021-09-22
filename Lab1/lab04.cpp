#include <iostream>

using namespace std;

bool check_prime(int p)
{
    if (p <= 1) {
        return false;
    }
    else {
        int i;
        for (i=2; i<=p/2; ++i) {
            if (p % i == 0) {
                return false;
            }
        }
    }
}

int main()

{
    int p;
    cin >> p;

    if (check_prime(p)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}