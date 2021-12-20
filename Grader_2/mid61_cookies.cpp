#include <iostream>
#include <vector>
using namespace std;
void insert_cookie(vector<int> &row, int pos, int x) {
    if (pos > row.size()) {
        row.push_back(x);
        return;
    }
    row.insert(row.begin() + pos, x);

}

void remove_cookie(vector<int> &row, int pos) {
    if (pos > row.size()) return;
    row.erase(row.begin() + pos - 1);
}
vector<int> row;
int main(){
    int n,o,k,num;
    cin >> n;
    for (int i = 0; i<n; i++ ){
        cin >> o;
        if (o == 2){
          cin >> k;
            remove_cookie(row,k);
        }
        if (o== 1){
            cin >> k >> num;
            insert_cookie(row,k,num);
        }
    }
    for ( auto i = row.begin(); i != row.end() ; i++){
        cout << *i << endl;
    }


}