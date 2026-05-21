// solution without Trie
//solution using set to store all the prefixes 
int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;
        for(int i=0;i<arr1.size();i++){
            int num = arr1[i];
            while(num > 0){
                prefixes.insert(num);
                num = num/10;
            }
        }
        int res = 0;
        for(int i=0;i<arr2.size();i++){
            int num = arr2[i];
            int len = 0;
            while(num > 0){
                len++;
                num = num/10;
            }
            num = arr2[i];
            while(num > 0){
                if(prefixes.find(num) != prefixes.end()){
                    res = max(res,len);
                    break;
                }
                num = num/10;
                len--;
            }
        }
        return res;
    }
