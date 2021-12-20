#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> result;
    for (int i = 0; i < n; i++){
        int m,k;
        cin >> m >> k;
        if (m == 2){
            int temp = 0;
            if (result.find(k) != result.end()){
                temp = 1;
            }
            cout << temp << endl;
        }
        if (m == 1){
            result.insert(k);
        }
    }
}