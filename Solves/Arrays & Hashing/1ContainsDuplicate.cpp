class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> m;
        int n=nums.size(),i;
        for(i=0;i<n;i++){
            if(m[nums[i]]) return true;
            m[nums[i]]=true;
        }
        return false;
    }
};
