#include <iostream>
#include <cstdio>
using namespace std;

int const MAX = 101;
int const DFS_WHITE = -1;
int DFS_BLACK = 1;
int matrix[MAX][MAX], dfs_matrix[MAX][MAX], grid;
bool flag;

void initGraph()
{
    string str = "", tmp;
    for (int a = 0; a < grid; a++)
    {
        cin >> tmp;
        str += tmp;
    }

    int index = 0;
    for (int x = 0; x < grid; x++)
        for (int y = 0; y < grid; y++, index++)
        {
            matrix[x][y] = str[index];
            if (matrix[x][y] == 'x' || matrix[x][y] == '@')
                dfs_matrix[x][y] = DFS_WHITE;
            else
                dfs_matrix[x][y] = 0;
        }
}

void dfs(int x, int y)
{
    if (matrix[x][y] == 'x')
        flag = true;
    dfs_matrix[x][y] = DFS_BLACK;
    int a = x, b = y;
    if (a - 1 >= 0)
    {
        if (dfs_matrix[a - 1][b] == DFS_WHITE)
            dfs(a - 1, b);
    }
    if (a + 1 < grid)
    {
        if (dfs_matrix[a + 1][b] == DFS_WHITE)
            dfs(a + 1, b);
    }
    if (b - 1 >= 0 && dfs_matrix[a][b - 1] == DFS_WHITE)
        dfs(a, b - 1);
    if (b + 1 < grid && dfs_matrix[a][b + 1] == DFS_WHITE)
        dfs(a, b + 1);
}

int main()
{
    int casos, ships;
    cin >> casos;

    for (int a = 1; a <= casos; a++)
    {
        cin >> grid;
        initGraph();
        ships = 0;

        for (int x = 0; x < grid; x++)
        {
            for (int y = 0; y < grid; y++)
            {
                if ((matrix[x][y] == 'x' || matrix[x][y] == '@') && dfs_matrix[x][y] == DFS_WHITE)
                {
                    flag = false;
                    dfs(x, y);
                    if (flag == true)
                        ships++;
                }
            }
        }
        printf("Case %d: %d\n", a, ships);
    }
}