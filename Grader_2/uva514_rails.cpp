#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> station;
    int train[1001];
    int n;
    while (scanf("%d", &n), n)
    {
        bool is_break = false;
        while (!is_break)
        {
            station = stack<int>();
            for (int i = 0; i < n; ++i)
            {
                cin >> train[i];
                if (train[i] == 0)
                {
                    is_break = true;
                    break;
                }
            }
            if (is_break) continue;
            int j = 1;
            bool use = true;
            for (int i = 0; i < n; ++i)
            {
                while (j <= n && (station.empty() || station.top() != train[i]))
                {
                    station.push(j);
                    j += 1;
                }
                if (station.top() == train[i])
                {
                    station.pop();
                    continue;
                }
                else
                {
                    use = false;
                    break;
                }
            }
            cout << (use ? "Yes" : "No") << endl;
        }
        cout << endl;
    }
}