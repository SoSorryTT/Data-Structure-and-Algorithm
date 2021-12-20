#include <iostream>
#include <vector>

using namespace std;

struct card{
    int value;
    card* next;
    card* last;
    card(int value, card* next=0, card* last=0):
            value(value), next(next), last(last) {}
};

int main(){
    int N,K;
    cin >> N >> K;
    card* head = new card(0,0);
    card* run = new card(00,0);
    bool A = true;
    for(int i=0;i<N;i++){
        int value;
        cin >> value;
        card* card_new_one = new card(value,0);
        if(A){
            A= false;
            head = card_new_one;
        }
        if(i == N-1){
            card_new_one->next = head;
            head->last = card_new_one;
        }
        run->next = card_new_one;
        card_new_one->last = run;
        run = card_new_one;
    }
    run = head;
    for(int j=0;j<K;j++){
        int want;
        int sum=0;
        cin >> want;
        while (run != 0){
            sum += run->value;
            if(sum>=want){
                run->last->next = run->next;
                run->last->next->last = run->last;
                run->value = 10000;
                run = run->next;
                break;
            }
            run = run->next;
        }
    }
    int item = 0;
    for(int i=0;i<K;i++){
        run = run->last;
    }
    while(head != 0 && item<N-K){
        while(head->value == 10000){
            head = head->next;
        }
        cout << head->value << endl;
        head = head->next;
        item++;
    }
}