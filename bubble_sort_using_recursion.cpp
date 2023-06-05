#include<iostream>
using namespace std;

void bubble_sort(int* arr, int s) {

    //base case
    if(s == 0 || s == 1){
        return;
    }
    //Recursive call
    for(int i = 0; i<s-i; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubble_sort(arr, s-1);
}

int main(){

    int arr[7] = {2,65,76,9,6,67,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr, n);

    for(int i = 0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}