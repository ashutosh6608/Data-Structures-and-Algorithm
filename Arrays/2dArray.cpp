#include <iostream>
#include <vector>      // For std::vector
#include <new>         // For placement new
#include <cstddef>     // For std::size_t and std::ptrdiff_t
using namespace std;




    // row wise print
    // outer loop

    // for ( int i = 0 ; i < 3; i++){
    //     // for every row , we  need to print value in each column
    //     for ( int j = 0; j < 3 ; j++){
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // column print
    // for ( int i = 0 ; i < 3; i++){
    //     // for every row we need to print the values in each column
    //     for (int j = 0 ; j < 3; j++){
    //         cout << brr[j][i] << " ";
    //     }
    // }

 bool findKey(int brr[][3] , int rows , int cols, int key){
    // row wise traversal
    for ( int j = 0 ; j < cols; j++ ){
        int sum = 0;
    for ( int i = 0 ; i < rows; i++){
        if (brr[i][j] == key)
        return true;
    }
  }
   return false;
 }

 int main() {
  
    // initilisation 
    int brr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};
        int rows = 3;
        int cols = 3;
        int key = 56;
     if (findKey(brr, 3, 3, 56)) {
        cout << "found" << " " << endl;
     }
      else {
        cout << "not found" << " " << endl;
     }
    
    }



    //// 2D Array with vectors //////
    int main() {
        vector<vector<int>>arr (5 , vector<int>(5,-8));
        cin >> arr[3][4]
    }