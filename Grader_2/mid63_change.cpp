#include <iostream>
using namespace std;
int find_max(int a[] ,int size){
    int max = -100000000000;
    for(int i = 0; i<size; i++){
        if (a[i]> max){
            max = a[i];
        }
    }
    return max;
}
int find_size(int size){
    int sum = 0;
    if(size == 1 || size == 2){
        return 1;
    }
    for (int i =0; i < size; i++){
        sum += i;
    }
    return sum;
}
int find_three_max(int x, int y, int z){
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int n,k;
    int x,y;
    int sum = 0;
    cin >> n >> k;
    int case_1[n];
    int case_2[find_size(n)];
    int list_x[n];
    int list_y[n];
    int count_1 = 0;
    for (int i = 0; i< n; i++){
        cin >> x >> y;
        list_x[i] = x;
        list_y[i] = y;
        sum += (x-y);  
    }
    if (k>=1){
        for (int l = 0; l<n;l++){
            int sum_j = 0;
            for (int j=0; j <n; j++){
                if (j != count_1){
                    sum_j += list_x[j]-list_y[j];
                }
            }
            case_1[l] = sum_j;
            count_1++;
        }
    }
    int count_2=0;
    if (k==2){
        for (int l = 0; l<n;l++){
            for (int j=l; j <n; j++){
                int sum_j = 0;
                sum_j += list_x[l] - list_y[l];
                if(j!=l){
                    sum_j += list_x[j]-list_y[j];
                    case_2[count_2] = sum -sum_j;
                    sum_j = 0;
                    count_2++;
                }
            }
        }
    }
    int max_case_1 = find_max(case_1,n);
    int max_case_2 = find_max(case_2,find_size(n));
    if(k >1){
        cout<< find_three_max(sum,max_case_1,max_case_2);
    }
    else if (k > 0){
        if(max_case_1 > sum){
            cout << max_case_1;
        }
        else{
            cout << sum;
        }

    }
    else{
        cout << sum;
    }
}