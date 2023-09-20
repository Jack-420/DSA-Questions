class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto el:arr){
            if(arr[abs(el)-1]<0){
                return abs(el);
            }else{
                arr[abs(el)-1] *= -1;
            }
        }
        return -1;
    }
};
