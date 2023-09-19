class Solution {
public:
    int first_occurance(vector<int>& arr, int target, int l, int r, int ans){
        if(l>r)return ans;
        int m=l+(r-l)/2;
        if(arr[m]==target){
            ans = m;
            return first_occurance(arr, target, l, m-1, ans);
        }else if(arr[m]<target){
            return first_occurance(arr, target, m+1, r, ans);
        }else{
            return first_occurance(arr, target, l, m-1, ans);
        }
    }
    
    int last_occurance(vector<int>& arr, int target, int l, int r, int ans){
        if(l>r)return ans;
        int m=l+(r-l)/2;
        if(arr[m]==target){
            ans = m;
            return last_occurance(arr, target, m+1, r, ans);
        }else if(arr[m]<target){
            return last_occurance(arr, target, m+1, r, ans);
        }else{
            return last_occurance(arr, target, l, m-1, ans);
        }
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        int f=first_occurance(arr, target, 0, arr.size()-1, -1);
        int l=last_occurance(arr, target, 0, arr.size()-1, -1);
        return {f, l};
    }
};