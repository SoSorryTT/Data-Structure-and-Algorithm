#include <iostream>
using namespace std;

int full = -100000000000;
int find_full(int a[] ,int scale) {
    for(int i = 0; i<scale; i++) {
        if (a[i]> full) {
            full = a[i];
        }
    }
    return full;
}

int find_scale(int scale) {
    // int total = 0;
    if(scale == 1 || scale == 2) {
        return 1;
    }
    int total = 0;
    for (int add =0; add < scale; add++) {
        total += add;
    }
    return total;
}
int find_three_full(int x, int y, int z) {
    if(x > y && x > z) {
        return x;
    }
    else if(y > x && y > z) {
        return y;
    } else {
        return z;
    }
}

int main()
{
    int k;
    int n;
    int x;
    int y;
    int total = 0;

    cin >> n >> k;

    int case_two[find_scale(n)];
    int case_one[n];
    int list_x1[n];
    int list_x2[n];
    int count_one = 0;
    int count_two = 0;

    for (int i = 0; i< n; i++) {
        cin >> x >> y;
        list_x1[i] = x;
        list_x2[i] = y;
        total += (x-y);  
    }
    if (k>=1) {
        for (int l=0; l<n; l++) {
            int total_j = 0;
            for (int j=0; j <n; j++) {
                if (j!=count_one) {
                    total_j += list_x1[j]-list_x2[j];
                }
            }
            case_one[l] = total_j;
            count_one += 1;
        }
    }
    if (k==2){
        for (int l=0; l<n; l++) {
            for (int j=l; j <n; j++) {
                int total_j = 0;
                total_j += list_x1[l] - list_x2[l];
                if(j!=l) {
                    total_j += list_x1[j]-list_x2[j];
                    case_two[count_two] = total -total_j;
                    total_j = 0;
                    count_two += 1;
                }
            }
        }
    }

    int full_case_one = find_full(case_one, n);
    int full_case_two = find_full(case_two, find_scale(n));

    if(k >1) {
        cout<< find_three_full(total, full_case_one, full_case_two);
    } else if (k > 0) {
        if(full_case_one > total) {
            cout << full_case_one;
        } else {
            cout << total;
        }
    } else {
        cout << total;
    }
}