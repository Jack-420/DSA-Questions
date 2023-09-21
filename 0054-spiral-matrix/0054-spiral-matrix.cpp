class Solution {
public:
    vector<int> ans;

    void round(vector<vector<int>>& mat, int i, int j, int n, int m){
        if(m<0 || n<0){
            return;
        }
        int is=i, js=j;

        while(j<=m){
            if(mat[i][j] != -101){
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
            }
            j++;
        }
        j--;
        while(i<=n){
            if(mat[i][j] != -101){
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
            }
            i++;
        }
        i--;
        while(j>=js){
            if(mat[i][j] != -101){
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
            }
            j--;
        }
        j++;
        while(i>=is){
            if(mat[i][j] != -101){
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
            }
            i--;
        }

        return round(mat, is+1, js+1, n-1, m-1);
    }

    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        round(mat, 0,0, n-1,m-1);

        return ans;
    }
};