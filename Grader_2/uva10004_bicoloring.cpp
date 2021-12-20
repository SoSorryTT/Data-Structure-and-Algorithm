#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector <int> graph[250];
int color[250];

int dfs()
{
    int visit[250] = {0};
    int variable,count = 0,contradiction = 0;
    stack <int> use;
    variable = 0;
    use.push(variable);
    count++;
    color[variable] = 1;
    visit[variable] = 1;
    while(true)
    {
        if(use.empty() == 1)
        {
            break;
        }
        variable = use.top();
        if(graph[variable].empty())
        {
            use.pop();
            continue;
        }
        for(int i = 0; i < graph[variable].size(); i++)
        {
            int got = graph[variable][i];
            if(visit[got] == 0)
            {
                visit[got] = 1;
                use.push(got);
                count++;
                if(color[variable] == 1) {
                    color[got] = 2;
                }
                else {
                    color[got] = 1;
                }

                break;
            }
            if(visit[i] == 1 && i < graph[variable].size() - 1) {
                if(color[got] == color[variable]) {
                    contradiction = 1;
                    break;
                }
            }



            if(visit[got] == 1 && i == graph[variable].size() - 1)
            {
                if(color[got] == color[variable]) {
                    contradiction = 1;
                    break;
                }
                use.pop();

            }
        }
        if(contradiction == 1) {
            break;
        }

    }
    return contradiction;

}

int main()
{
    int node,edge,i,a,b;
    while(scanf("%d",&node) == 1)
    {
        if(node == 0)
        {
            break;
        }
        cin >> edge;
        for(i = 0; i < edge; i++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int found = dfs();
        if(found == 1)
        {
            cout << "NOT BICOLORABLE." << endl;
        }
        else
        {
            cout << "BICOLORABLE." << endl;
        }
        for( i = 0; i < node; i++)
        {
            graph[i].clear();
        }

    }
    return 0;

}