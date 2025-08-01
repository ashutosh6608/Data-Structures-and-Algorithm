#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ////////////////////////// TOTAL NUMBER OF OCCURENCE ////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////


//   int firstOccurence(vector<int>nums,  int target){
//      int s = 0;
//      int e =  nums.size() - 1;

//      int mid = s + (e-s)/2;
//      int ans1 = 0;

//      while( s<= e) {
//       if (nums[mid]== target){
//           ans1 = mid;
//            e = mid - 1;
//       }
//       else if ( nums[mid] > target){
//           e = mid - 1;
//       }
//       else {
//           s = mid + 1;
//       }
//       mid = s + (e-s) / 2;    
//      }
//       return ans1;
//   }


//   int lastOccurence(vector<int>nums,  int target){
//      int s = 0;
//      int e =  nums.size() - 1;

//      int mid = s + (e-s)/2;
//      int ans2 = 0;

//      while( s<= e) {
//       if (nums[mid]== target){
//            ans2 = mid;
//            s = mid + 1;
//       }
//       else if ( nums[mid] > target){
//           e = mid - 1;
//       }
//       else {
//           s = mid + 1;
//       }
//       mid = s + (e-s) / 2;    
//      }
//       return ans2;
//   }




// int main() {
//   vector<int>arr{30 , 58,  58 ,  58 , 58, 70 , 87 };
//   int target = 58;
//   int ans = lastOccurence(arr, target) - firstOccurence(arr, target) + 1;
//   cout << ans << endl;
//   return 0;
// }


/////////////// MISSING ELEMENT IN A SORTED ARRAY//////////






 /////// FINF SQRT WITH PRECISION ////////////////////////////

// double findsqrt(int n, int precision, double step) {
//     int s = 0;
//     int e = n;
//     int ans = 0; // Initialize to ensure it's always safe to use

//     while (s <= e) {
//         int mid = (s + e) / 2;

//         if (mid * mid == n) {
//             ans = mid;
//             break;
//         } else if (mid * mid < n) {
//             ans = mid; // Best integer approximation so far
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }

//     double finalAns = ans;
//     double inc = step;

//     for (int i = 0; i < precision; i++) {
//         for (double j = finalAns; j * j <= n; j += inc) {
//             finalAns = j;
//         }
//         inc = inc / 10;
//     }

//     return finalAns;
// }

// int main() {
//     int target = 78;
//     int precision = 4;
//     double step = 0.1;
//     double Answer = findsqrt(target, precision, step);
//     cout << "SQRT is " << Answer << endl;
//     return 0;
// }




////////// Search in a nearly sorted array ///////////////////////////////

// bool nearlysorted(vector<int>arr , int target){
//         int s = 0;
//         int e = arr.size() - 1;
//         int mid = s + (e-s)/2;
        

//         while ( s<=e){
//             if (arr[mid] == target || arr[mid - 1] == target || arr[mid+1] == target){
//                  return true;
//             }
//             else  if (arr[mid] < target ){
//                     s = mid+1;
//                   }
//                   else {
//                 e = mid-1;
//                   }
//                   mid = s+ (e-s)/2;
//             }
//           return false;
//         }



// int main() {
//     vector<int>arr{10,30,26,78,98,104,107,106,110, 206};
//     int size = 10;
//     int target = 206;
//     if (nearlysorted(arr,target)){
//          cout << "Target is Found" << endl;
//     }
//     else {
//         cout << "Not Found" << endl;
//     }
    
// }









// find a element in an Array and pair exists find element with odd occurence also where can exsits 2 times for an element

//  #include <iostream>
// #include <vector>
// using namespace std;

// int oddOccurence(vector<int> arr) {
//     int s = 0;
//     int e = arr.size() - 1;

//     while (s < e) {
//         int mid = s + (e - s) / 2;

//         // Check index pairing pattern
//         if (mid % 2 == 0) {
//             if (arr[mid] == arr[mid + 1]) {
//                 s = mid + 2;
//             } else {
//                 e = mid;
//             }
//         } else {
//             if (arr[mid] == arr[mid - 1]) {
//                 s = mid + 1;
//             } else {
//                 e = mid - 1;
//             }
//         }
//     }

//     // Final element at index s is the odd one out
//     return arr[s];
// }

// int main() {
//     vector<int> arr{1, 2, 3, 3, 8, 8, 9, 10, 10, 12, 12};
//     int odd = oddOccurence(arr);
//     cout << "Odd Occurrence Element is " << odd << endl;
//     return 0;
// }
