#include <iostream>
#include <queue>

using namespace std;

int a[20];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    queue<pair<int,int>> que;
    for(int i=0;i<n;i++){
        int op;
        cin >> op;
        if(op == 1){
            int x;
            cin >> x;
            for(int j=0;j<x;j++){
                int id;
                int fla;
                cin >> id >> fla;
                pair<int,int> p;
                p.first = id;
                p.second = fla;
                que.push(p);
            }
        }else if(op == 2){
            cout << que.front().first << endl;
            a[que.front().second-1]++;
            que.pop();
        }
    }
    cout << que.size() << endl;
    for(int i=0;i<20;i++){
        cout << a[i] << " ";
    }cout << endl;
    return 0;
}