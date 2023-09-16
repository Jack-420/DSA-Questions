class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int xr = 0;
        for(auto el:arr){
            xr ^= el;
        }
        for(int i=0;i<=n;i++) xr ^= i;

        return xr;
    }
};