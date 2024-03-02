#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Printarray(vector<int>arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(vector<int>arr, int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
        }
        swap(arr[minIndex], arr[i]);
    }
    Printarray(arr, n);
}



int main() {
    vector<int>arr = {63, 23, 11, 12, 5};
    int n = arr.size();
    Printarray(arr, n);
    SelectionSort(arr, n);
    
}