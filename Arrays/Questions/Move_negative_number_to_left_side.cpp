#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main() {
    int arr[] = {-1 , 5 , -9 , 4, 0 , 9 , -3, 5 , -4 , 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0; 
    int end = size - 1;
    int i = 0;

    while( i <= end) {
        if ( arr[i] < 0 ){
            swap(arr[i] , arr[start]);
            i++;
            start++;
        }
        else if (arr[i] > 0){
            swap(arr[i], arr[end]);
            end--;
        }
        else {
            i++;
        }
    }
    for ( int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}