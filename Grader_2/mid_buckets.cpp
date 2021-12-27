#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    vector<int> vector = {0,0,0,0,0};
    int store = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int use;
        cin >> use;
        if (use + vector[0] <1000)
        {
            vector[0] += use;
        }
        else
        {
            vector[0] = 0;
            store += 1000;
        }
        sort(vector.begin(),vector.end());
    }
    cout << store << endl;
}