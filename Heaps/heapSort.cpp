#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;

    if (leftIndex <= n && arr[largest] < arr[leftIndex]) {
        largest = leftIndex;
    }
    if (rightIndex <= n && arr[largest] < arr[rightIndex]) {
        largest = rightIndex;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n) {
    int index = n;
    while (index > 1) {
        swap(arr[1], arr[index]);
        index--;
        heapify(arr, index, 1);
    }
}

int main() {
    int arr[] = {-1, 12, 14, 4, 9, 8, 16}; // -1 dummy for 1-based indexing
    int n = 6;

    buildHeap(arr, n);
    cout << "Printing the Heap:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);
    cout << "Printing the sorted array:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
