class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int up=1, c=0, i=0, temp=arr[0];

        while(i<arr.size()){
            if(arr[i]==temp){
                c++;
            }else{
                arr[up] = arr[i];
                temp = arr[i];
                up++;
            }
            i++;
        }
        return up;
    }
};