class Solution {
public:
    void merge(vector<int>& arr, int l, int r, int m){
        int t1sz = m-l+1; 
        int t2sz = r-m;

        int temp1[t1sz];
        int temp2[t2sz];

        for(int i=0;i<t1sz;i++){
            temp1[i] = arr[l+i];
        }
        for(int i=0;i<t2sz;i++){
            temp2[i] = arr[m+i+1];
        }

        int p1=0, p2=0, i=l;

        while(p1<t1sz && p2<t2sz){
            if(temp1[p1]<temp2[p2]){
                arr[i] = temp1[p1];
                p1++;
            }else{
                arr[i] = temp2[p2];
                p2++;
            }
            i++;
        }
        while(p1<t1sz){
            arr[i] = temp1[p1];
            i++;
            p1++;
        }
        while(p2<t2sz){
            arr[i] = temp2[p2];
            i++;
            p2++;
        }
    }

    void merge_sort(vector<int>& arr, int l, int r){
        if(l>=r) return;
        
        int mid = (l+r)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);

        merge(arr, l, r, mid);
    }

    vector<int> sortArray(vector<int>& arr) {
        merge_sort(arr, 0, arr.size()-1);
        return arr;
    }
};