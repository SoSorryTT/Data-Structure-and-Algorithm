#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode {
    valueType color;
    valueType id;
    ListNode* next;
    ListNode(valueType color, valueType id, ListNode* next=0)
            :color(color), id(id), next(next) {}
};

int main() {
    int n, m;
    int id = 1;
    int next_index;
    int color;



    cin >> n >> m;
    if(n > 100000) {
        n = 100000;
    }
    if(m > 100000) {
        m = 100000;
    }

    ListNode *ball[m + n];
    auto *run = new ListNode(0,0);
    for (int i = 0; i < m; i++) {
        cin >> color ;
        auto *new_node = new ListNode(color, id);
        id++;
        ball[id - 1] = new_node;
        run->next = new_node;
        run = new_node;
    }

    for (int i = 0; i < n; i++) {
        cin >> color >> next_index;
        auto *new_node = new ListNode(color, id);
        id++;
        ball[id-1] = new_node;
        new_node->next = ball[next_index]->next;
        ball[next_index]-> next = new_node;

    }
    ListNode *head = ball[1];
    for (int i = 0; i < m + n; ++i) {
    cout << head->id << endl;
    head = head->next;
    }
}