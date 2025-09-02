
#include<iostream>
using namespace std;

void heapify(int arr[], int n , int i){
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2*i + 1;
    int largest = index;

    if(leftIndex <= n && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }

     if(rightIndex <= n && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }

    
    if (largest != index){
        swap(arr[largest], arr[index]);
        // update the pointer
        index = largest;

        // recursive call
        heapify(arr, n , index);
    }
}

void buildHeap(int arr[], int n){
    for(int i = n/2; i > 0; i--){
        heapify(arr,n,i);
    }
}

int main(){
    int arr[] = {-1,12,15,13,11,14};
    int n = 5;
    buildHeap(arr,n);
    cout << "Printing the Heap" << endl;
    for ( int i = 0 ; i <= n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}