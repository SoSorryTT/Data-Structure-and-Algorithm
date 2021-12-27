#include <iostream>
#include <map>
using namespace std;

int main()
{
    int number, M;
    int count = 0;

    map<int,int> use;
    cin >> number;

    for (int i = 0; i<number; i++) {
        cin >> M;
        if (use.find(M) != use.end()) {
            use[M] += 1;
        }
        else{
            use[M] = 1;
        }
    }

    for (auto check_auto : use) {
        if (check_auto.second >= 3) {
            count += 1;
        }
    }
    cout << count << endl;
}