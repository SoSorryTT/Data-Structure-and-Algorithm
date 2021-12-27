#include <iostream>
#include <cstdio>
using namespace std;

int ship_black = 1;
int const ship_white = -1;
int const full = 101;
int use_matrix[full][full];
int ship_matrix[full][full];
int grate;
bool banner;

void initGraph() {
    int want_index = 0;
    string string = "", store;
    for (int a = 0; a < grate; a++) {
        cin >> store;
        string += store;
    }

    for (int x = 0; x < grate; x++) {
        for (int y = 0; y < grate; y++, want_index++)
        {
            use_matrix[x][y] = string[want_index];
            if (use_matrix[x][y] == 'x' || use_matrix[x][y] == '@')
                ship_matrix[x][y] = ship_white;
            else
                ship_matrix[x][y] = 0;
        }
    }
}

void dfs(int x, int y) {
    if (use_matrix[x][y] == 'x')
        banner = true;
    ship_matrix[x][y] = ship_black;
    int a = x;
    int b = y;
    if (a - 1 >= 0) {
        if (ship_matrix[a - 1][b] == ship_white)
            dfs(a - 1, b);
    }
    if (a + 1 < grate) {
        if (ship_matrix[a + 1][b] == ship_white)
            dfs(a + 1, b);
    }
    if (b - 1 >= 0 && ship_matrix[a][b - 1] == ship_white)
        dfs(a, b - 1);
    if (b + 1 < grate && ship_matrix[a][b + 1] == ship_white)
        dfs(a, b + 1);
}

int main()
{
    int casos;
    int boats;
    cin >> casos;

    for (int a = 1; a <= casos; a++)
    {
        cin >> grate;
        initGraph();
        boats = 0;

        for (int x = 0; x < grate; x++)
        {
            for (int y = 0; y < grate; y++)
            {
                if ((use_matrix[x][y] == 'x' || use_matrix[x][y] == '@') && ship_matrix[x][y] == ship_white) {
                    banner = false;
                    dfs(x, y);
                    if (banner == true)
                        boats += 1;
                }
            }
        }
        printf("Case %d: %d\n", a, boats);
    }
}