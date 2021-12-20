#include <iostream>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;
int main(){
    int round;
    cin >> round;
    for (int i = 0; i <round;i++){
        list<int> lst;
        queue<pair <int,int>> q;
        int n;
        cin >> n;
        int m;
        cin >> m;
        int count = 0;
        for (int j = 0; j < n; j++){
            int x;
            cin >> x;
            if (count == m){
                q.push( make_pair(x,1) );
            }
            else{
                q.push( make_pair(x,0) );
            }
            lst.push_back(x);
            count++;
        }
        
        lst.sort();
        lst.reverse();
        int time = 1;
        while(true){
            if (q.front().first != lst.front()){
                q.push(q.front());
                q.pop();
            }
            else{
                if(q.front().second != 1){
                    time++;
                    lst.pop_front();
                    q.pop();
                }
                else{
                    break;
                }
            }
        }
        cout << time << endl;
        
    }
}