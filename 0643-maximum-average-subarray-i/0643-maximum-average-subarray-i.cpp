class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double maxi=-100000, temp=0;

        for(int i=0;i<k;i++){
            temp+=arr[i];
        }
        maxi=temp;
        for(int i=0; i<arr.size()-k;i++){
            temp-=arr[i];
            temp+=arr[i+k];
            maxi = max(maxi, temp);
        }
        return maxi/k;
    }
};