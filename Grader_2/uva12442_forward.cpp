#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

vector<int> array(50001), total(50001, -1);
bitset<50001> view;

int dfs(int u)
{
    if (view[u]) return 1;
    view[u] = true;
    total[u] = 1 + dfs(array[u]);
    view[u] = false;
    return total[u];
}

int main()
{
    int t;
    int n;
    int c = 0;
    cin >> t;
    while (c++ < t)
    {
        cin >> n;
        view.reset();
        for (int i = 1; i <= n; ++i)
        {
            int x;
            int y;
            cin >> x >> y;
            array[x] = y;
            total[x] = 0;
        }
        int ans = 0;
        int max_x = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (!total[i])dfs(i);
            if (total[i] > max_x)
                max_x = total[i], ans = i;
        }
        cout << "Case " << c << ": " << ans << endl;
    }
}