#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector <int> graph[250];

int color[250];

int dfs()
{
    int view[250] = {0};
    int value, num = 0, contra = 0;
    stack <int> use;
    value = 0;
    use.push(value);
    num++;
    color[value] = 1;
    view[value] = 1;
    while(true)
    {

        if(use.empty() == 1)
        {
            break;
        }

        value = use.top();

        if(graph[value].empty())
        {
            use.pop();
            continue;
        }

        for(int i = 0; i < graph[value].size(); i++)
        {
            int receive = graph[value][i];
            if(view[receive] == 0)
            {
                view[receive] = 1;
                use.push(receive);
                num++;
                if(color[value] == 1) {
                    color[receive] = 2;
                }
                else {
                    color[receive] = 1;
                }

                break;
            }

            if(view[i] == 1 && i < graph[value].size() - 1) {
                if(color[receive] == color[value]) {
                    contra = 1;
                    break;
                }
            }

            if(view[receive] == 1 && i == graph[value].size() - 1)
            {
                if(color[receive] == color[value]) {
                    contra = 1;
                    break;
                }
                use.pop();
            }
        }

        if(contra == 1) {
            break;
        }

    }

    return contra;

}

int main()
{
    int node, edge, i, a, b;
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