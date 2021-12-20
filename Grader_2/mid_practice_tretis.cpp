#include <iostream>
using namespace std;
void compute_horizontal(int* current_max, int loc, int h[]){
    for (int j=loc-1; j<loc+3; j++) {
        if (h[j] > *current_max) {
            *current_max = h[j];
            }
    }
}
void compute_square(int* current_max, int loc, int h[]){
    for (int j=loc-1; j<loc+1; j++) {
        if (h[j] > *current_max) {
            *current_max = h[j];
            }
    }
}
void compute_vertical(int loc, int h[]){
    h[loc-1]+=4;
}
int find_max(int lst[]){
    int temp = lst[0];
    for(int i = 0; i<10;i++){
        if(lst[i] > temp){
            temp = lst[i];
        }
    }
    return temp;
}


int main() {
    
    int n;
    cin >> n;

    int height[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    string c;
    int k;
    for (int i=0; i<n; i++) {
        cin >> c >> k;
        
        if (c == "-" && k < 8) {
            int max = height[k-1];
            compute_horizontal(&max,k,height);
            for (int j=k-1; j<k+3; j++) {
                height[j] = max + 1;
            }
        }
        else if (c == "o" && k < 10) {
            int max = height[k-1];
            compute_square(&max,k,height);
            for (int j=k-1; j<k+1; j++) {
                height[j] = max + 2;
            }
        }
        else if (c == "i" && k<=10) {
            compute_vertical(k,height);
        }
    }
    
    cout << find_max(height) << endl;
    
}