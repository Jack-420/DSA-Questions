class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> m;

        for(int i=0; i<arr.size(); i++){
            int comp = target-arr[i];
            if(m.find(comp)!=m.end() && m[comp] != i){
                return {i, m[comp]};
            }
            m[arr[i]] = i;
        }
        return {};
    }
};