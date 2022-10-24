#include <bits/stdc++.h>
using namespace std;


int binary_search(int array[],int array_length, int search_key){
    int start = 0;
    int end = array_length  -1;
    while(start <= end){
        int mid  = (start+end) / 2;
        if (array[mid] == search_key){
            cout<<"Found at "<<mid<<endl;
            return mid;
        }
        else if (array[mid] < search_key){
            start  = mid+1;
        }
        else{
            end = mid-1;
        }

    }
    return -1;
    
}



int main(){
    int array_length = 9;
    int array[array_length] = {12,14,15,16,17,19,21,22,23};
    int search_key = 23;

    int search_index = binary_search(array,array_length,search_key);
    cout<<search_index<<endl;

    return 0;
}