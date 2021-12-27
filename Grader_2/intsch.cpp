#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> store;
    int num;
    int count = 1;
    cin >> num;
    for (int i = 0; i<num; i++) {
        int x, y;
        cin >> x >> y;
        store.push_back(make_pair(y, x));
    }
    sort(store.begin(),store.end());
    int first = store[0].second;
    int last = store[0].first;

    for(auto check_auto : store) {
        if (check_auto.second != first) {
            if(check_auto.second >= last) {
                count += 1;
                first = check_auto.second;
                last = check_auto.first;
            }
        }
    }
    cout << count << endl;
}