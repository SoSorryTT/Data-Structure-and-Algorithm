#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

vector<int> a(50001), sum(50001, -1);
bitset<50001> visited;

int dfs(int u) {
    if (visited[u]) return 1;
    visited[u] = true;
    sum[u] = 1 + dfs(a[u]);
    visited[u] = false;
    return sum[u];
}


int main() {
    int t, n, c = 0;
    cin >> t;
    while (c++ < t) {
        cin >> n;
        visited.reset();
        for (int i = 1; i <= n; ++i) {
            int x, y;
            cin >> x >> y;
            a[x] = y;
            sum[x] = 0;
        }
        int ans = 0, mx = 0;
        for (int i = 1; i <= n; ++i) {
            if (!sum[i])dfs(i);
            if (sum[i] > mx)
                mx = sum[i], ans = i;
        }
        cout << "Case " << c << ": " << ans << endl;
    }
}