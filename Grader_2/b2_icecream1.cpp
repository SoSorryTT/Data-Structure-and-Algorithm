#include <iostream>
using namespace std;

const int full_num = 100000;
int customer[full_num];
int main()
{
    int count_num = 0;
    int sum = 0;
    int num;
    cin >> num;
    // int count_num = 0;
    // int sum = 0;
    for (int i = 0; i < num; i++) {
        int use;
        cin >> use;
        if(use == 1)
        {
            int num;
            cin >> num;
            for (int j=0; j<num; j++)
            {
                cin >> customer[j+sum];
            }
            sum += num;
        }
        else if(use == 2)
        {
            cout << customer[count_num] << endl;
            count_num += 1;
        }
    }
    cout << sum-count_num << endl;
}