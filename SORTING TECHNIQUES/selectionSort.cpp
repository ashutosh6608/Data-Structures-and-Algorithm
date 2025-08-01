#include<iostream>
#include <climits>
using namespace std;


    
    
    void selectionSort(int arr[] , int n){
        for (int i = 0; i < n-1; i++){
               int smallestIdx = i;
            for ( int j = i+1; j < n ; j++){
               if ( arr[j] < arr[smallestIdx]){
                smallestIdx = j;
               }
            }
            swap(arr[i] , arr[smallestIdx]);
        }
        
    }


      void printArray(int arr[] , int n){
        for (int i = 0; i < n ; i++){
            cout << arr[i] << " ";
        }
           return;
      }

      int main() {
        int n = 5;
        int arr[] = {23 , 78, 98, 43, 56};
        selectionSort(arr, n);
        printArray(arr, n);
      }

