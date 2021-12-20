#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode {
    valueType val;
    ListNode *next;

    explicit ListNode(valueType val, ListNode *next = nullptr)
            : val(val), next(next) {}
};

// insert first node
ListNode *insertEmpty(ListNode *last, valueType val) {
    auto *num = new ListNode(val);
    last = num;
    last->next = last;
    return last;
}

ListNode *insertEnd(ListNode *last, valueType val) {
    auto *num = new ListNode(val);
    if (last == nullptr) {
        return insertEmpty(last, val);
    } else {
        num->next = last->next;
        last->next = num;
        last = num;
    }
    return last;
}

void last_one(ListNode *last, int k) {
    int i = 0;
    while (last->val != last->next->val) // no next
    {
        i++;
        if (i != k) {
            last = last->next;
        } else {
            ListNode *temp = last->next;
            last->next = last->next->next;
            free(temp);
            i = 0; // restart counting
        }
    }
    cout << last->val << endl;
}


int main() {
    ListNode *last = 0;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        last = insertEnd(last, i + 1);
    }
    last_one(last, k);


}