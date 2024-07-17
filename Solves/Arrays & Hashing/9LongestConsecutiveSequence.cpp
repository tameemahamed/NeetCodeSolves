class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int i,n=nums.size();
        int maxx=0,cnt=1;
        for(i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                maxx=max(cnt,maxx);
                cnt=1;
            }
        }
        maxx=max(cnt,maxx);
        return maxx;
    }
};
