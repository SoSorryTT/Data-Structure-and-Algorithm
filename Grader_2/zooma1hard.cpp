#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode {
    valueType colour;
    valueType id_use;
    ListNode* forward_one;
    ListNode(valueType colour, valueType id_use, ListNode* forward_one=0)
            :colour(colour), id_use(id_use), forward_one(forward_one) {}
};

int main()
{
    int num;
    int num2;
    int id_use = 1;
    int index_next_one;
    int colour;

    cin >> num >> num2;
    if(num > 100000)
    {
        num = 100000;
    }
    if(num2 > 100000)
    {
        num2 = 100000;
    }

    ListNode *ball_use[num2 + num];
    auto *run = new ListNode(0,0);
    for (int i = 0; i < num2; i++)
    {
        cin >> colour ;
        auto *new_node = new ListNode(colour, id_use);
        id_use += 1;
        ball_use[id_use - 1] = new_node;
        run->forward_one = new_node;
        run = new_node;
    }

    for (int i = 0; i < num; i++)
    {
        cin >> colour >> index_next_one;
        auto *new_node = new ListNode(colour, id_use);
        id_use += 1;
        ball_use[id_use-1] = new_node;
        new_node->forward_one = ball_use[index_next_one]->forward_one;
        ball_use[index_next_one]-> forward_one = new_node;
    }

    ListNode *HEAD = ball_use[1];
    for (int i = 0; i < num2 + num; ++i)
    {
        cout << HEAD->id_use << endl;
        HEAD = HEAD->forward_one;
    }
}