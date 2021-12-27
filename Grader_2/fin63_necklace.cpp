#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    vector<pair<int, int>>temp;
    int num, M;
    int x, y;
    int count = 0+1;
    cin >> M >> num;

    for (int number = 0; number<num; number++) {
        cin >> x >> y;
        temp.push_back(make_pair(y, x));
    }

    sort(temp.begin(),temp.end());
    int start = temp[0].second;
    int end = temp[0].first;

    for(auto number : temp) {
        if (number.second != start) {
            if(number.second > end) {
                count+=1;
                start = number.second;
                end = number.first;
            }
        }
    }
    
    cout << count << endl;
}