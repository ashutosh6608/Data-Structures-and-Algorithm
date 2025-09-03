  #include<iostream>
  #include<queue>
  #include<vector>
  using namespace std;

long long int findSubarray(vector<long long int>&arr, int k){
           
    

    unordered_map<int, int>m;
    // intialise map
    m[0] = 1;

     int total = 0;    // total number of subarrays
     int PrefixSum = 0;
     int n = arr.size();

    for ( int i = 0; i < n; i++){
          PrefixSum += arr[i];
          if(m.count(PrefixSum - k)){
               total += m[PrefixSum - k];   // count of prefix sum total mein daal do
               m[PrefixSum]++;    // prefix sum ko increse kr do
          }
          else {
            m[PrefixSum] ++;
          }
         
    }
       return total;
}