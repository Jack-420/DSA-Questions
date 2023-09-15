class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int lsum=0, rsum=0;
        
        for(int val:arr){
            rsum+=val;
        }

        for(int i=0;i<arr.size();i++){
            lsum+=arr[i];
            if(rsum==lsum) return i;
            rsum-=arr[i];
        }

        return -1;
    }
};