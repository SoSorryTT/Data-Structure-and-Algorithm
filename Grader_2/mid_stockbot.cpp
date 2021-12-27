#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2;
    cin >> num >> num2;
    int store[num];
    bool bought = false;
    int bought_stock = 0;
    int income = 0;
    for (int i = 0; i<num; i++)
    {
        cin >> store[i];
    }
    for(int j = 0; j<num-1; j++)
    {
        if (!bought) {
            if (store[j+1] - store[j] >=num2)
            {
                bought_stock += store[j+1];
                bought = true;
            }
        } else if(bought) {
            if (store[j] - store[j+1] >=num2) {
                income += store[j+1] - bought_stock;
                bought_stock = 0;
                bought = false;
            }
        }
    }
    cout << income << endl;
}