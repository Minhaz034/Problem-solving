#include <bits/stdc++.h>
using namespace std;

int * linear_search(int array[], int n, int x){
    int* found_indexes = new int[n];
    int f_i_iterator = 0;
    for (int i=0; i<n; i++){
        if (array[i] == x){
            cout<<"found at index: "<<i<<endl;
            found_indexes[f_i_iterator] = i;
            f_i_iterator++;
        }
    }
    return found_indexes;
}

int main(){
    int A[6] = {45,12,12,12,23,12};
    int n = 6;
    int x = 12;
    int* results = linear_search(A,n,x);
    for (int i=0; i<n; i++){
        cout<<results[i]<<endl;
    }
    // cout<<results[0]<<endl;
    delete[] results; 
    return 0;
}