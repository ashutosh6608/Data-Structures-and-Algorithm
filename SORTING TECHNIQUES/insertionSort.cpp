
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for ( int i = 0 ; i < n; i++){
        int curr = arr[i];
       int prev = i-1;
       while(prev >= 0 && arr[prev] > curr){
        arr[prev+1] = arr[prev];
        prev--;
       }
       arr[prev+1] = curr; // placing current element in current position
    }
};
void printArray(int arr[] , int n){
        for (int i = 0; i < n ; i++){
            cout << arr[i] << " ";
        } 
           return;
      }

      int main() {
        int n = 5;
        int arr[] = {23 , 15, 43, 38, 56};
        insertionSort(arr, n);
        printArray(arr, n);
      }