#include <iostream>
#include <queue>

using namespace std;

int array[20];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int num;
    cin >> num;
    queue<pair<int,int>> que;
    for(int i=0; i<num; i++)
    {
        int opera;
        cin >> opera;
        if(opera == 1)
        {
            int x;
            cin >> x;
            for(int j=0; j<x; j++)
            {
                int id;
                int flat;
                cin >> id >> flat;
                pair<int,int> position;
                position.first = id;
                position.second = flat;
                que.push(position);
            }
        }
        else if(opera == 2)
        {
            cout << que.front().first << endl;
            array[que.front().second-1]++;
            que.pop();
        }
    }
    cout << que.size() << endl;
    for(int i=0; i<20; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    // return 0;
}