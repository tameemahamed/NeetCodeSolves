class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> a;
        sort(nums.begin(),nums.end());
        int i,j,n=nums.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                auto f=binary_search(nums.begin()+j+1,nums.end(),-nums[i]-nums[j]);
                if(f){
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(-nums[i]-nums[j]);
                    sort(a.begin(),a.end());
                    ans.insert(a);
                    a.clear();
                }
            }
        }
        vector<vector<int>> aa;
        for(auto it:ans){
            aa.push_back(it);
        }
        return aa;
    }
};
