class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s;
        int n = strs.size();
        vector<bool> flag;
        for(int i=0;i<n;i++){
            s.push_back(strs[i]);
            flag.push_back(true);
        }
        for(int i=0;i<n;i++){
            sort(s[i].begin(),s[i].end());
        }
        vector<vector<string>> ans;
        vector<string> a;
        for(int i=0;i<n;i++){
            a.clear();
            if(flag[i]) a.push_back(strs[i]);
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]&&flag[j]==true){
                    a.push_back(strs[j]);
                    flag[j]=false;
                }
            }
            if(a.size()>0) ans.push_back(a);
        }
        return ans;
    }
};
