
#include<iostream>
using namespace std;

void bubbleSort( int arr[] , int n) {
    for (int i = 0 ; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            }
        }
    }
}
void printArray( int arr[], int n ){
    for (int i = 0 ; i < n; i++){
         cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
   int  n = 10;
   int arr[] = {89 , 47, 843, 94, 7479, 8849, 534, 435, 345,543545};
   bubbleSort(arr, n);
   printArray(arr, n);
   return 0;
}