#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<pair<int,int>> temp;
    int n,m;
    cin >> m >>n;
    for (int i = 0;i<n;i++){
        int x,y;
        cin >> x >> y;
        temp.push_back(make_pair(y,x));
    }
    sort(temp.begin(),temp.end());
    int count = 1;
    int start = temp[0].second;
    int end = temp[0].first;
    for(auto i : temp){
        if (i.second != start){
            if(i.second > end){
                count++;
                start = i.second;
                end = i.first;
            }
        }
    }
    
    cout << count << endl;
}