#include<bits/stdc++.h>
using namespace std;


int bs(vector<int>&ans, int low,int high, int target){
    while (low <= high)
    {
     int mid = low + (high - low)/2;
     if(ans[mid] == target){
        return mid;
     }else if(target > ans[mid]){
        low = mid + 1;
     }else{
        high = mid -1;
     }
    }
    return -1;
}


int main(){
    int n;
    cout << "Enter the size of the array:";
    cin>>n;
    cout << "Enter the value to search:";
    int target;
    cin >> target;
    vector<int>arr(n);
    cout << "Enter the Element of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int val = bs(arr, 0, n-1,target);
    if(val == -1){
        cout << "Value is not found in the array";
    }else{
        cout << "value is there in array at index :" << val;
    }
    return 0;
}