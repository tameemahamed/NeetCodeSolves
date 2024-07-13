#define all(x) x.begin(), x.end() 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(all(nums));
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
};
