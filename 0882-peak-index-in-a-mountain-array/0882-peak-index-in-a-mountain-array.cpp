class Solution {
public:
    int peek(vector<int>& arr, int l, int r){
        if(l>=r) return l;
        int m = l+(r-l)/2;

        if(arr[m-1]<arr[m] && arr[m]>arr[m+1]){
            return m;
        }
        else if(arr[m] < arr[m+1]){
            return peek(arr, m+1, r);
        }else{
            return peek(arr, l, m);
        }
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return peek(arr, 0, arr.size()-1);
    }
};