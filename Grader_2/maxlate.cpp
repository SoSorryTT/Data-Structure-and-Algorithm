#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int find_max(int arr[],int size){
    int max = 0;
    for (int i = 0 ; i<size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int const MAX_N = 100010;
int deadline[MAX_N];
int duration[MAX_N];
int main() 
{ 
    vector< pair <int,int> > vect; 
    int n,m,k;
    cin >> n;
    int result[n];
    for (int i = 0; i< n; i++){
        cin >> m >> k;
        deadline[i] = m;
        duration[i] = k;
    }
    for (int i=0; i<n; i++){
        vect.push_back( make_pair(deadline[i],duration[i]) );
    } 
    sort(vect.begin(), vect.end()); 
    int temp = 0;
    for (int i= 0; i < n; i++){
        temp += vect[i].second;
        if (temp - vect[i].first > 10){
            result[i] = 1000*(temp-vect[i].first-10);
        }
        else{
            result[i] = 0;
        }
    }
    cout << find_max(result,n) << endl;

}