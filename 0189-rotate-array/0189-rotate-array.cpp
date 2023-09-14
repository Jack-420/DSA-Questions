class Solution {
public:
    void rotate(vector<int>& arr, int k) {

        int n = arr.size();
        if(n==1) return;

        k%=n;
        if(k==0) return;

        int temp[k];
        for(int i=0; i<k; i++){
            temp[i] = arr[n-k+i];
        }

        for(int i=n-1; i>=k; i--){
            arr[i] = arr[i-k];
        }

        for(int i=0; i<k; i++){
            arr[i] = temp[i];
        }
    }
};