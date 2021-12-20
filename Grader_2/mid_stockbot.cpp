#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int stock[n];
    bool buy = false;
    int buy_stock = 0;
    int sell_stock = 0;
    for (int i = 0; i<n; i++){
        cin >> stock[i];
    }
    for(int j = 0; j<n-1; j++){
        if (!buy){
            if (stock[j+1] - stock[j] >=k){
                buy_stock += stock[j+1];
                buy = true;
            }
        }
        else if(buy){
            if (stock[j] - stock[j+1] >=k){
                sell_stock += stock[j+1] - buy_stock;
                buy_stock = 0;
                buy = false;
            }
        }

    }
    cout << sell_stock << endl;
}