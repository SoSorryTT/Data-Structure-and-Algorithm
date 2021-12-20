#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int x[n];
    int y[m];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < m; i++){
        cin >> y[i];
    }
    int count = 0;
    int result[m];
    for(int i : y){
        vector<pair<int,int>> temp;
        for (int j : x){
            temp.push_back(make_pair(abs(j-i),j));
        }
        sort(temp.begin(),temp.end());
        result[count] = temp[0].second;
        count++;
    }
    for(int i = 0; i <m; i++){
        cout << result[i] << endl;
    }
}