#include <iostream>
#include <vector>
using namespace std;

void add_cookie(vector<int> &row, int position, int x) {
    if (position > row.size()) {
        row.push_back(x);
        return;
    }
    row.insert(row.begin() + position, x);
}

void delete_cookie(vector<int> &row, int position) {
    if (position > row.size()) {
        return;
    }
    row.erase(row.begin() + position - 1);
}

vector<int> row;
int main()
{
    int objective;
    int n;
    int k;
    int number;

    cin >> n;
    for (int i = 0; i<n; i++ ) {
        cin >> objective;
        if (objective == 2){
          cin >> k;
            delete_cookie(row, k);
        }

        if (objective == 1) {
            cin >> k >> number;
            add_cookie(row, k, number);
        }
    }

    for ( auto check_auto = row.begin(); check_auto != row.end() ; check_auto++) {
        cout << *check_auto << endl;
    }
}