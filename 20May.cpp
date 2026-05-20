//First Approach
vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mp1,mp2;
        int n = A.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
            int cnt = 0;
            for(auto it: mp1){
                if(mp2.find(it.first) != mp2.end()){
                    cnt++;
                }
            }
            ans[i] = cnt;
        }
        return ans;
    }
