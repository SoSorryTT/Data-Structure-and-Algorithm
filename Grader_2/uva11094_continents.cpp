#include <stdio.h>
#include "iostream"
#define MAX 25
#define SEEN 's'
using namespace std;

int N, M, X, Y;
char G[MAX][MAX];
int V[MAX][MAX];
char country;
int answer;

int add_flood(int x, int y)
{
    int use;
    if (y == M)
        y = 0;
    else if (y == -1)
        y = M - 1;
    if (x < 0 || x >= N || y < 0 || y >= M)
        return 0;
    if (V[x][y])
        return 0;
    if (G[x][y] != country)
        return 0;

    V[x][y] = 1;
    use = 1;
    use += add_flood(x, y - 1);
    use += add_flood(x, y + 1);
    use += add_flood(x + 1, y);
    use += add_flood(x - 1, y);
    return use;
}

int main()
{
    int i, j, t;
    while (scanf("%d %d", &N, &M) == 2)
    {
        getchar();
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                G[i][j] = getchar();
                V[i][j] = 0;
            }
            getchar();
        }
        cin >> X >> Y;
        country = G[X][Y];
        add_flood(X, Y);
        answer = 0;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                if (G[i][j] == country)
                {
                    t = add_flood(i, j);
                    if (t > answer)
                        answer = t;
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}