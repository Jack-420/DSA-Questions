class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0, r=arr.size()-1;
        while(l<=r){
            if(arr[l]<=arr[r]) return arr[l];
            int m = l+(r-l)/2;
            if(arr[m]<arr[0]){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};