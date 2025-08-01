#include<iostream>
#include<climits>
#include<array>
#include<vector>
using namespace std;


// // int main() {
// //     // array declare
// //     int arr[] = { 10 , 23 , 56 , 78 , 54};
// //     int size = 5;
// //     int key = 3;

// //    bool flag = 0;

// //     for ( int i = 0 ; i < size ; i++){
// //         if ( arr[i] == key){
    
// //             flag = 1;
// //         }
// //     } 

// //     if(flag) 
// //     cout  << " found" << endl;
// //     else
// //     cout << " Not found" << endl;
// //      }

 
// // Maximum in an array

// int main () {
//     int arr[] = {23 , 78, 98, 10 , 89, 45 , 75, 90, 25, 21 , 91};
//     int size = 11;
//     int start = 0;
//     int end = size-1;
// +
//     while (start < end) {
     
//      cout << arr[start] << " " << arr[end] << " ";
//      start ++;
//      end --;
//     }
//     if (arr[start] == arr[end]){
//         cout <<arr[start] << " ";
//     }
//     }

   

////////// DYNAMIC ARRAY INITILAISATION //////////


// int main () {
//     vector<int> arr;

//     cout << arr.size() << endl;
//     cout << arr.capacity() << endl;

//     // insert
//     arr.push_back(5);
//     arr.push_back(6);

//     // print 
//     for ( int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // remove delete 
//     arr.pop_back();

//     // print
//     for ( int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     vector<int> brr(10);
//     cout << "Size of b" << " " << brr.size() << endl;
//     cout << "Capacity of b" << " " << brr.capacity() << endl;

//     return 0;

// }

////////////// UNIQUE ELEMENT /////////////

// int uniqueElement (vector<int>arr){
//     int n = arr.size();
//     int ans = 0;
//     for ( int i = 0 ; i < n; i++ ){
//           ans = ans ^ arr[i];
//     }
//     return ans;
// }

///////// UNION OF TWO ARRAY IN A SORTED WAY AND PRINT ONLY ONCE IF ELEMENT IS IN BOTH ARRYS

//   int unionArray(vector<int>&v, vector<int>v1 , vector<int>v2){
//    int n1 = v1.size();
//    int n2 = v2.size();
//    int i = 0; int j = 0;
//     while ( i < n1 && j < n2){
        
//         if (v1[i] > v2[j]){
//             v.push_back(v2[j]);
//             j++;
//         }
        
//        else if (v1[i] < v2[j]){
//             v.push_back (v1[i]);
//             i++;
//         }

//         else{
//             v.push_back(v1[i]);
//             i++;
//             j++;
//         }
//     }
//      // Add remaining elements
//     while (i < n1) {
//         v.push_back(v1[i]);
//         i++;
//     }
//     while (j < n2) {
//         v.push_back(v2[j]);
//         j++;
//     }
// }
       
  

//   void printArray ( vector < int > arr){
//     for ( int i = 0 ; i < arr.size() ; i++){
//         cout << arr[i] << " ";
//     }
//   }


//////////////////////   INTERSECTION ELEMENT /////////////////////////

// vector <int> intersection(vector<int>v1 , vector<int>v2){
//     int i = 0; int j = 0;
// vector<int>result;
//     while ( i < v1.size() && j < v2.size() ){
//         if (v1[i] > v2[j]){
//              j++;
//         }
//         else if (v2[j] > v1[i]){
//               i++;
//         }
//          else {
//           result.push_back(v1[i]);
//           i++;
//           j++;
//         }
        
        
//     }
//   return result;
// }

/////////////////////// PAIR SUM /////////////////////////////
// vector<int> pairSum (vector<int> arr1 ,int targetsum){
//    int i = 0;
//    int j = arr1.size() - 1;
//    vector<int>result;
//    while (  i < j){
//     if(arr1[i] + arr1[j] > targetsum){
//         j--;
//     }
//     else if ( arr1[i] + arr1[j] < targetsum){
//         i++;
//     }
//     else {
//         result.push_back(arr1[i]);
//         result.push_back(arr1[j]);
//         i++;
//         j--;
//     }
//    }   
//    return result;
// }


 ////////////////// SORT 0s and 1s ///////////////////////////////////


//  /// METHOD 1 //////////////////
// vector<int> sortArray( vector<int>arr){
//     int start = 0;
//     int end = arr.size()-1;
//     while( start < end){
//         if(arr[start] == 0 && arr[end] == 0){
//              start ++;
//         }
//         else if ( arr[start] == 0 && arr[end] == 1){
//             start ++;
//             end --;
//         }
//         else if (arr[start] == 1 && arr[end] == 0){
//             swap(arr[start] , arr[end]);
//         }
//         else{
//               end -- ;
//         }
//     }
//     return arr;
// }
// void printArray (vector<int> arr){
//     for ( int i = 0 ; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
// }   

// // METHOD 2///    DUTCH NATIONAL FLAG
int main() {
    vector<int>arr1;
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(1);
    arr1.push_back(1);
    arr1.push_back(0);
    arr1.push_back(1);
    arr1.push_back(1);
    arr1.push_back(0);
    arr1.push_back(1);

    int start = 0;
    int end = arr1.size() - 1;
    int i = 0;

    while ( i <= end) {
        if (arr1[i] == 0 ){
            // swap from left
            swap(arr1[start], arr1[i]);
            i++;
            start++;
        }
        else if (arr1[i] == 1 ){
            // swap from right
            swap(arr1[i] , arr1[end]);
          
            end--;
        }
    }
    for (auto value : arr1){
        cout << value << " ";
    }
    
}



