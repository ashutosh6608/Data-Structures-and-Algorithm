#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMax(vector<int>& arr){
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}  

int findMin(vector<int>& arr){
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}  

int main(){
    vector<int> arr = {2, 5, 19, 3, 5};

    int ans = findMax(arr);  
    cout << "Max element = " << ans << "\n" << ans;

    int ans1 = findMin(arr);
    cout << "Min Element = " << ans1;
    
    return 0;
}
