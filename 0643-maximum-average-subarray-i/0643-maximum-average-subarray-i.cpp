class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,maxSum=0,n=nums.size();
        for(double i=0;i<n&&i<k;i++){
            sum+=nums[i];
        }
        maxSum=sum;
        for(double i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            maxSum=max(maxSum,sum);
        }
        double ans=maxSum/k;
        return ans;
    }
};