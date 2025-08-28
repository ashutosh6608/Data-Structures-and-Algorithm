#include <iostream>
#include <vector>
using namespace std;


void reverse(vector<int>&arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
}

 void printArray(vector<int>&arr){
    for (int i = 0; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
    
 }


 int main(){
    vector<int>arr = {2,4,6,8,3};
    reverse(arr);

    printArray(arr);
 }