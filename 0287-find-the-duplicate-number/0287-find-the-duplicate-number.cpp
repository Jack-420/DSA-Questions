class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto el:nums){
            if(s.find(el) != s.end()){
                return el;
            }else{
                s.insert(el);
            }
        }
        return -1;
    }
};