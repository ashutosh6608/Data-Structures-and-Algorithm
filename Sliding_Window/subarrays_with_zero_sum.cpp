#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

long long int findSubarray(vector<long long int>&arr){
    long long int total = 0;
    unordered_map<long long int, long long int> m;
    long long int PrefixSum = 0;

    // initialise map
    m[0] = 1;

    for (int i = 0; i < arr.size(); i++){
        PrefixSum += arr[i];

        if(m.count(PrefixSum)){
            total += m[PrefixSum];
            m[PrefixSum]++;
        }
        else {
            m[PrefixSum] = 1;
        }
    }
    return total;
}
